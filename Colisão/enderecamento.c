#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANHO_HASH 10

// Estrutura para representar um produto
typedef struct Produto {
    int indiciePopularidade;  // Índice de popularidade
    float preco;          // Valor do produto
    char nome[100];       // Nome do produto
    char categoria[20];   // Categoria do produto
    int disponibilidade;  // Quantas unidades restam
    int ocupada;          // Flag para indicar se o slot está ocupado
} Produto;

// Estrutura da Tabela Hash
typedef struct {
    Produto tabela[TAMANHO_HASH];  // Array de produtos
} TabelaHash;

// Função Hash: Retorna o índice baseado no nome do produto
int funcao_hash(char *nome) {
    int soma = 0;
    for (int i = 0; nome[i] != '\0'; i++) {
        soma += nome[i];
    }
    return soma % TAMANHO_HASH;  // Usa módulo para determinar a posição na tabela
}

// Função hash para duplo hashing
int hash2(char *nome) {
    int soma = 0;
    for (int i = 0; nome[i] != '\0'; i++) {
        soma += nome[i];
    }
    return 7 - (soma % 7);  // Usa módulo para determinar a posição na tabela
}

// Sondagem linear
int sondagem_linear(TabelaHash *tabela, char *nome) {
    int indice = funcao_hash(nome);
    int tentativas = 0;

    while (tabela->tabela[indice].ocupada && tentativas < TAMANHO_HASH) {
        if (strcmp(tabela->tabela[indice].nome, nome) == 0) {
            return indice;  // Retorna o índice se encontrar o produto
        }
        indice = (indice + 1) % TAMANHO_HASH;  // Avança linearmente
        tentativas++;
    }

    return -1;  // Retorna -1 se não encontrar o produto
}

// Função para criar um novo produto
Produto criar_produto(int indiciePopularidade, float preco, const char *nome, const char *categoria, int disponibilidade) {
    Produto novo_produto;

    novo_produto.indiciePopularidade = indiciePopularidade;
    novo_produto.preco = preco;
    strcpy(novo_produto.nome, nome);
    strcpy(novo_produto.categoria, categoria);
    novo_produto.disponibilidade = disponibilidade;
    novo_produto.ocupada = 1;  // Marca o slot como ocupado
    return novo_produto;
}

// Função para inserir um produto na tabela hash usando sondagem linear
void inserir_linear(TabelaHash *tabela, Produto produto) {
    int indice = funcao_hash(produto.nome);

    // Se não houver colisão, insere diretamente
    if (!tabela->tabela[indice].ocupada) {
        tabela->tabela[indice] = produto;
    } else {
        // Se houver colisão, chama a sondagem linear
        int novo_indice = sondagem_linear(tabela, produto.nome);
        if (novo_indice == -1) {  // Tabela cheia
            for (int i = 0; i < TAMANHO_HASH; i++) {
                if (!tabela->tabela[i].ocupada) {
                    tabela->tabela[i] = produto;  // Insere o produto
                    return;
                }
            }
            printf("Erro: Tabela hash está cheia.\n");
        }
    }
}

// Função para exibir todos os produtos
void exibir_todas(TabelaHash *tabela) {
    for (int i = 0; i < TAMANHO_HASH; i++) {
        if (tabela->tabela[i].ocupada) {  // Acessa corretamente o campo ocupada
            printf("\nProduto -> Índice de Popularidade: %d, Preço: %.2f, Nome: %s, Categoria: %s, Disponibilidade: %d, (Índice: %d)\n",
                   tabela->tabela[i].indiciePopularidade,
                   tabela->tabela[i].preco,
                   tabela->tabela[i].nome,
                   tabela->tabela[i].categoria,
                   tabela->tabela[i].disponibilidade,
                   i);
        }
    }
}

// Função de busca de um produto pelo nome
Produto* buscar_produto(TabelaHash *tabela, char *nome) {
    int indice = sondagem_linear(tabela, nome);

    if (indice != -1 && tabela->tabela[indice].ocupada) {
        return &tabela->tabela[indice];  // Retorna o produto encontrado
    }

    printf("Erro: Produto não encontrado.\n");
    return NULL;  // Produto não encontrado
}

// Função de exclusão de um produto pelo nome
void excluir_produto(TabelaHash *tabela, char *nome) {
    int indice = sondagem_linear(tabela, nome);

    if (indice != -1 && tabela->tabela[indice].ocupada) {
        tabela->tabela[indice].ocupada = 0;  // Marca o slot como desocupado
        printf("Produto '%s' removido com sucesso.\n", nome);
    } else {
        printf("Erro: Produto não encontrado para exclusão.\n");
    }
}

// Função principal para demonstrar o uso da tabela hash com sondagem
int main() {
    // Inicializa a tabela hash
    TabelaHash tabela_linear = {0};  // Todos os slots começam desocupados

    // Inserir produtos na tabela hash usando sondagem linear
    printf("\nInserção com Sondagem Linear:\n");
    inserir_linear(&tabela_linear, criar_produto(1, 10000.50, "Geladeira Smart Sony T-300X Deluxe", "Eletrodomésticos", 35));
    inserir_linear(&tabela_linear, criar_produto(2, 299.99, "Ventilador Arno Turbo", "Eletrodomésticos", 150));
    inserir_linear(&tabela_linear, criar_produto(3, 1500.00, "Notebook Dell Inspiron 5000", "Informática", 25));
    inserir_linear(&tabela_linear, criar_produto(4, 79.99, "Fone de Ouvido Bluetooth JBL", "Eletrônicos", 200));
    inserir_linear(&tabela_linear, criar_produto(5, 4599.90, "TV LED 4K Samsung 55\"", "Eletrônicos", 45));

    exibir_todas(&tabela_linear);

    // Buscar um produto
    printf("\nBusca por 'Notebook Dell Inspiron 5000':\n");
    Produto *p = buscar_produto(&tabela_linear, "Notebook Dell Inspiron 5000");
    if (p != NULL) {
        printf("Produto encontrado: %s, Preço: %.2f\n", p->nome, p->preco);
    }

    // Excluir um produto
    printf("\nExclusão de 'Ventilador Arno Turbo':\n");
    excluir_produto(&tabela_linear, "Ventilador Arno Turbo");

    // Exibir produtos após exclusão
    exibir_todas(&tabela_linear);

    return 0;
}

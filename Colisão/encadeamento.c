#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANHO_HASH 10

// Estrutura para representar um e-commerce de produtos
typedef struct Produto {
    int indiciePopularidade;  // Indicie de popularidade
    float preco;          // Valor do  Produto
    char nome[100];       // Nome do Produto
    char categoria[20]; // categoria do Produto
    int disponibilidade;      // Quantas unidades restam
    struct Produto *proximo; // Ponteiro para o próximo produto (lista ligada)
} Produto;

// Estrutura da Tabela Hash
typedef struct {
    Produto *tabela[TAMANHO_HASH];  // Array de ponteiros para o início da lista ligada
} TabelaHash;

// Função Hash: Retorna o índice baseado no Nome do produto
int funcao_hash(char *nome) {
    int soma = 0;
    for (int i = 0; nome[i] != '\0'; i++){
        soma += nome[i];
    }
  return soma % TAMANHO_HASH;  // Usa módulo para determinar a posição na tabela
}

// Função para criar um novo produto
Produto *criar_Produto(int indiciePopularidade, float preco, const char *nome, const char *categoria, int disponibilidade) {
    Produto *novo_produto = (Produto *)malloc(sizeof(Produto));
    if (novo_produto == NULL) {
        printf("Erro ao alocar memória!\n");
        exit(1);
    }
    novo_produto->indiciePopularidade = indiciePopularidade;
    novo_produto->preco = preco;
    strcpy(novo_produto->nome, nome);
    strcpy(novo_produto->categoria, categoria);
    novo_produto->disponibilidade = disponibilidade;
    novo_produto->proximo = NULL;
    return novo_produto;
}

// Função para inserir um produto na tabela hash (usando listas ligadas para colisões)
void inserir(TabelaHash *tabela, Produto *produto) {
    int indice = funcao_hash(produto->nome);  // Calcula o índice baseado no ID
    produto->proximo = tabela->tabela[indice];  // Insere no início da lista ligada
    tabela->tabela[indice] = produto;
}

// Função para exibir toda os produtos
void exibir_todas(TabelaHash *tabela) {
    for (int i = 0; i < TAMANHO_HASH; i++) {
        Produto *atual = tabela->tabela[i];
        while (atual != NULL) {
            printf("\nProduto ->\n  -Íncice de Popularidade: %d\n  -Preço: %.2f\n  -Nome: %s\n  -Categoria: %s\n  -Disponibilidade: %d\n  -(Índice: %d)\n",
                   atual->indiciePopularidade, atual->preco, atual->nome, atual->categoria, atual->disponibilidade, i);
            atual = atual->proximo;  // Avança para o próximo produto
        }
    }
}

// Função para buscar um produto na tabela hash pelo Nome
Produto *buscar(TabelaHash *tabela, char *nome) {
    int indice = funcao_hash(nome);  // Calcula o índice para busca
    Produto *atual = tabela->tabela[indice];
    
    while (atual != NULL) {
        if (strcmp(atual->nome, nome) == 0) {
            return atual;  // Retorna o produto se encontrado
        }
        atual = atual->proximo;  // Vai para o próximo produto na lista ligada
    }
    return NULL;  // Retorna NULL se não for encontrada
}

// Função para excluir um produto na tabela hash pelo Nome
void excluir(TabelaHash *tabela, char *nome) {
    int indice = funcao_hash(nome);  // Calcula o índice para exclusão
    Produto *atual = tabela->tabela[indice];
    Produto *anterior = NULL;

    while (atual != NULL) {
        if (strcmp(atual->nome, nome) == 0) {
            // Se o elemento a ser removido for o primeiro da lista
            if (anterior == NULL) {
                tabela->tabela[indice] = atual->proximo;  // Remove o primeiro elemento
            } else {
                anterior->proximo = atual->proximo;  // Remove o elemento no meio ou fim
            }
            free(atual);  // Libera a memória do produto
            printf("Produto com Nome %s foi excluído.\n", nome);
            return;
        }
        anterior = atual;
        atual = atual->proximo;
    }
    printf("Produtos com Nome %s não encontrado para exclusão.\n", nome);
}

// Função para contar o número total de elementos (produtos) na tabela hash
int contar_elementos(TabelaHash *tabela) {
    int total = 0;

    // Percorre todas as posições da tabela hash
    for (int i = 0; i < TAMANHO_HASH; i++) {
        Produto *atual = tabela->tabela[i];

        // Percorre a lista ligada em cada posição
        while (atual != NULL) {
            total++;  // Incrementa o contador para cada produto encontrado
            atual = atual->proximo;  // Vai para o próximo elemento na lista
        }
    }

    return total;
}


// Função para inserir 20 produtos predefinidos na tabela hash
void inserir_dados_predefinidos(TabelaHash *tabela) {
    // Inserindo produtos diretamente
    inserir(tabela, criar_Produto(1, 10000.50, "Geladeira Smart Sony T-300X Deluxe", "Eletrodomésticos", 35));
    inserir(tabela, criar_Produto(2, 299.99, "Ventilador Arno Turbo", "Eletrodomésticos", 150));
    inserir(tabela, criar_Produto(3, 1500.00, "Notebook Dell Inspiron 5000", "Informática", 25));
    inserir(tabela, criar_Produto(4, 79.99, "Fone de Ouvido Bluetooth JBL", "Eletrônicos", 200));
    inserir(tabela, criar_Produto(5, 4599.90, "TV LED 4K Samsung 55\"", "Eletrônicos", 45));
    inserir(tabela, criar_Produto(6, 899.90, "Micro-ondas LG Smart Oven", "Eletrodomésticos", 65));
    inserir(tabela, criar_Produto(7, 2499.00, "Smartphone Apple iPhone 12", "Telefonia", 30));
    inserir(tabela, criar_Produto(8, 299.00, "Teclado Mecânico Redragon", "Informática", 80));
    inserir(tabela, criar_Produto(9, 599.99, "Mouse Gamer Razer Viper", "Informática", 120));
    inserir(tabela, criar_Produto(10, 199.90, "Carregador Portátil Xiaomi", "Acessórios", 90));
    inserir(tabela, criar_Produto(11, 3200.00, "Smart TV LG 65\" 4K", "Eletrônicos", 40));
    inserir(tabela, criar_Produto(12, 1099.90, "Cafeteira Expresso Nespresso", "Eletrodomésticos", 25));
    inserir(tabela, criar_Produto(13, 55.00, "Cabo HDMI 2.0 5m", "Acessórios", 200));
    inserir(tabela, criar_Produto(14, 199.99, "Aspirador de Pó Philco Vertical", "Eletrodomésticos", 50));
    inserir(tabela, criar_Produto(15, 159.90, "Batedeira Planetária Mondial", "Eletrodomésticos", 75));
    inserir(tabela, criar_Produto(16, 249.90, "Ferro de Passar Roupa Philips", "Eletrodomésticos", 100));
    inserir(tabela, criar_Produto(17, 749.90, "Monitor LED 24\" Samsung", "Informática", 60));
    inserir(tabela, criar_Produto(18, 4999.00, "Home Theater LG 5.1", "Eletrônicos", 15));
    inserir(tabela, criar_Produto(19, 199.00, "Webcam Logitech HD", "Informática", 85));
    inserir(tabela, criar_Produto(20, 2999.99, "PlayStation 5 Sony", "Games", 20));


    printf("Produtos foram cadastrados com sucesso.\n");
}


// Função principal para demonstrar o uso da tabela hash com produtos de um e-commerce
int main() {
    // Inicializa a tabela hash
    TabelaHash tabela = {NULL};

    // Inserir os dados predefinidos na tabela hash
    inserir_dados_predefinidos(&tabela);
    
    // Exibir todos os Produtos inseridos
    printf("\nTodos os Produtos inseridos: %d\n", contar_elementos(&tabela));
    exibir_todas(&tabela);

    
    // Busca por um produto específico
    printf("\nBuscar um produto:\n");
    Produto *t = buscar(&tabela, "Webcam Logitech HD");
    if (t != NULL) {
        printf("Produto ->\n  -Íncice de Popularidade: %d\n  -Preço: %.2f\n  -Nome: %s\n  -Categoria: %s\n  -Disponibilidade: %d\n",
                t->indiciePopularidade, t->preco, t->nome, t->categoria, t->disponibilidade);
    } else {
        printf("Produto não encontrado.\n");
    }
    
    
    // Excluir os produtos selecionados
    printf("\nProdutos excluidos:\n");
    excluir(&tabela, "PlayStation 5 Sony");
    
    
    // Exibir todos os produtos inseridas
    printf("\nProdutos Atualizados: %d\n", contar_elementos(&tabela));
    exibir_todas(&tabela);
    

    return 0;
}
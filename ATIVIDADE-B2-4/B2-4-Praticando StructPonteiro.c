/******************************************************************************
auto incremente de ID
fazer um struct com as informacoes do produto

A ou B ou C:
a)será possível inserir um produto novo (solicitar as infos do produto, EXCETO O ID)
b)simula a compra de produtos, pesquisa atraves do ID, se nao achar, print produto inexistente. 
Para cada venda, pede a qunt de produtos e se ha no estoque
c)exibir lista de produtos cadastrados, em ordem alfabetica (bubblesort)

*******************************************************************************/
#include <stdio.h>
#include <string.h>

struct infosProduto{
    int id;
    char nomeDoProduto[50];
    char dsProduto[1000];
    float precoUnitario;
    int qtdEstoque;
};

int escolha;
int a = 0;
int id = 0;
int quantMaxDeProdutos = 3;

int main(){
    char temp[100];
    struct infosProduto produtos[quantMaxDeProdutos]; 

    while(a != 1){
        printf("\n1) PARA INSERIR UM PRODUTO NOVO\n2) PARA COMPRAR\n3) PARA EXIBIR LISTA DE PRODUTOS CADASTRADOS\nDIGITE: ");
        scanf("%i", &escolha);
        
        //sair caso nao seja inserido uma opcao viavel   
        if(escolha > 3){
            return 0;
        }
        //caso sobre inserir um produto novo
        if(escolha  == 1){
            printf("\nCADASTRE UM PRODUTO:\n");

            printf("nome do produto: ");
            scanf("%s", produtos[id].nomeDoProduto);
            id++;

            printf("descricao do produto: ");
            scanf("%s", produtos[id-1].dsProduto);

            printf("preco: ");
            scanf("%f", &produtos[id-1].precoUnitario);

            printf("qtd disponivel: ");
            scanf("%i", &produtos[id-1].qtdEstoque);

            if(id > 0){
                printf("ids: %d\n\n", id);
            }
        }
        //caso de compra de produtos
        if (escolha == 2) {
              printf("Digite o ID do produto: ");
              scanf("%i", &id);

              if (id <= 0 || id > quantMaxDeProdutos) {
                printf("ID inválido!\n\n");
                continue;
              }

              printf("id[%d]: %s\n", id - 1, produtos[id - 1].nomeDoProduto);

              int quantVendida;
              printf("Quantidade a ser comprada: ");
              scanf("%i", &quantVendida);
            // Atualiza o estoque e faz a venda
              if (produtos[id - 1].qtdEstoque >= quantVendida) {
                produtos[id - 1].qtdEstoque -= quantVendida;
                printf("Compra realizada com sucesso!\n\n");
              } else if (produtos[id - 1].qtdEstoque < quantVendida){
                  printf("estoque insuficiente\n\n");
              }
        }

        //caso de listar produtos cadastrados  
        if (escolha == 3) {
            // Ordena os produtos em ordem alfabetica
              int trocas = 1;
              while (trocas > 0) {
                trocas = 0;
                for (int i = 0; i < (quantMaxDeProdutos - 1); i++) {
                  if (strcmp(produtos[i].nomeDoProduto, produtos[i + 1].nomeDoProduto) > 0) {
                    struct infosProduto temp_produto = produtos[i];
                    produtos[i] = produtos[i + 1];
                    produtos[i + 1] = temp_produto;
                    trocas = 1;
                  }
                }
                  if (trocas > 0) {                  
                    int i = quantMaxDeProdutos - 1;
                    i /= 2;
                  }
              }

              printf("\nPRODUTOS CADASTRADOS:\n");
              for (int i = 0; i < id; i++) {
                printf("Produto: %s\n", produtos[i].nomeDoProduto);
              }
            }        
    }
}

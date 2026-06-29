#include <stdio.h>

int main() {
    int opcao;
    int estoque = 100;
    int quantidade;

    while (1) {
        printf("\n===== ESTOQUE =====\n");
        printf("1 - Consultar Estoque\n");
        printf("2 - Entrada de Produtos\n");
        printf("3 - Saida de Produtos\n");
        printf("4 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Estoque atual: %d unidades\n", estoque);
                break;

            case 2:
                printf("Quantidade de entrada: ");
                scanf("%d", &quantidade);
                estoque += quantidade;
                break;

            case 3:
                printf("Quantidade de saida: ");
                scanf("%d", &quantidade);

                if (quantidade <= estoque) {
                    estoque -= quantidade;
                } else {
                    printf("Erro: nao ha estoque suficiente!\n");
                }
                break;

            case 4:
                return 0;

            default:
                printf("Opcao invalida!\n");
        }
    }

    return 0;
}
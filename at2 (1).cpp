#include <stdio.h>

int main() {
    int opcao;
    float faturamento = 0;

    while (1) {
        printf("\n===== CANTINA =====\n");
        printf("1 - Vender Salgado (R$ 8)\n");
        printf("2 - Vender Refrigerante (R$ 6)\n");
        printf("3 - Consultar Faturamento\n");
        printf("4 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                faturamento += 8;
                printf("Salgado vendido!\n");
                break;

            case 2:
                faturamento += 6;
                printf("Refrigerante vendido!\n");
                break;

            case 3:
                printf("Faturamento total: R$ %.2f\n", faturamento);
                break;

            case 4:
                return 0;

            default:
                printf("Opcao invalida!\n");
        }
    }

    return 0;
}
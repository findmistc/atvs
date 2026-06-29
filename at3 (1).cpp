#include <stdio.h>

int main() {
    int opcao;
    float combustivel = 50;
    float litros;

    while (1) {
        printf("\n===== CARRO =====\n");
        printf("1 - Ver Combustivel\n");
        printf("2 - Abastecer\n");
        printf("3 - Viajar\n");
        printf("4 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Combustivel atual: %.2f litros\n", combustivel);
                break;

            case 2:
                printf("Litros para abastecer: ");
                scanf("%f", &litros);

                if (combustivel + litros <= 50) {
                    combustivel += litros;
                } else {
                    printf("Nao pode ultrapassar 50 litros!\n");
                }
                break;

            case 3:
                printf("Litros consumidos na viagem: ");
                scanf("%f", &litros);

                if (litros <= combustivel) {
                    combustivel -= litros;
                } else {
                    printf("Combustivel insuficiente!\n");
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
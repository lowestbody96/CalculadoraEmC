#include <stdio.h>

int main() {
    char operacao;
    float numero1, numero2;

    printf("Informe a operacao desejada (+, -, *, /): ");
    scanf(" %c", &operacao);

    printf("Informe os dois valores (ex: 60 7): ");
    scanf("%f %f", &numero1, &numero2);

    switch (operacao) {
        case '-':
            printf("Resultado: %f\n", numero1 - numero2);
            break;

        case '+':
            printf("Resultado: %f\n", numero1 + numero2);
            break;

        case '*':
            printf("Resultado: %f\n", numero1 * numero2);
            break;

        case '/':
            if (numero2 != 0) {
                printf("Resultado: %f\n", numero1 / numero2);
            } else {
                printf("Erro: Divisao por zero!\n");
            }
            break;

        default:
            printf("Operacao invalida!\n");
            break;
    }

    return 0;
}
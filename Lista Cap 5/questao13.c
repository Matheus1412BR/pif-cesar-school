#include <stdio.h>

void exibeMenu(void);
float soma(float a, float b);
float subtrai(float a, float b);
float multiplica(float a, float b);
float divide(float a, float b);

int main(void) {
    int opcao;
    float num1, num2, resultado;

    exibeMenu();
    printf("Escolha a operacao (1 a 4): ");
    scanf("%d", &opcao);

    if (opcao < 1 || opcao > 4) {
        printf("Opcao invalida!\n");
        return 1;
    }

    printf("Digite o primeiro operando: ");
    scanf("%f", &num1);
    printf("Digite o segundo operando: ");
    scanf("%f", &num2);

    switch (opcao) {
        case 1:
            resultado = soma(num1, num2);
            printf("Resultado: %.2f + %.2f = %.2f\n", num1, num2, resultado);
            break;
        case 2:
            resultado = subtrai(num1, num2);
            printf("Resultado: %.2f - %.2f = %.2f\n", num1, num2, resultado);
            break;
        case 3:
            resultado = multiplica(num1, num2);
            printf("Resultado: %.2f * %.2f = %.2f\n", num1, num2, resultado);
            break;
        case 4:
            if (num2 == 0.0f) {
                printf("Erro: divisao por zero nao permitida!\n");
            } else {
                resultado = divide(num1, num2);
                printf("Resultado: %.2f / %.2f = %.2f\n", num1, num2, resultado);
            }
            break;
    }

    return 0;
}

void exibeMenu(void) {
    printf("=== CALCULADORA ===\n");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("===================\n");
}

float soma(float a, float b) {
    return a + b;
}

float subtrai(float a, float b) {
    return a - b;
}

float multiplica(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}

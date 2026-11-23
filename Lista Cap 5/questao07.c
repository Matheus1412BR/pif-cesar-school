#include <stdio.h>

int soma(int a, int b);

int main(void) {
    int x, y, resultado;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &x);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &y);

    resultado = soma(x, y);
    printf("Soma = %d\n", resultado);

    return 0;
}

int soma(int a, int b) {
    return a + b;
}

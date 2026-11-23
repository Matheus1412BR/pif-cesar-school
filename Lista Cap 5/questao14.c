#include <stdio.h>

int somaDigitos(int n);

int main(void) {
    int numero;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Por favor, informe um numero inteiro positivo.\n");
        return 1;
    }

    printf("Soma dos digitos de %d = %d\n", numero, somaDigitos(numero));

    return 0;
}

int somaDigitos(int n) {
    if (n < 10) {
        return n;
    }
    return (n % 10) + somaDigitos(n / 10);
}

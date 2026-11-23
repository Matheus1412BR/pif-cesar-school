#include <stdio.h>

long fatorialIterativo(int n);
long fatorialRecursivo(int n);

int main(void) {
    int n;
    long fatIter, fatRec;

    printf("Digite um inteiro nao negativo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Erro: o fatorial nao e definido para numeros negativos.\n");
        return 1;
    }

    fatIter = fatorialIterativo(n);
    fatRec = fatorialRecursivo(n);

    printf("Fatorial Iterativo (%d!) = %ld\n", n, fatIter);
    printf("Fatorial Recursivo (%d!) = %ld\n", n, fatRec);

    if (fatIter == fatRec) {
        printf("Confirmado: ambos os resultados coincidem!\n");
    } else {
        printf("Divergencia entre os resultados.\n");
    }

    return 0;
}

long fatorialIterativo(int n) {
    long resultado = 1;
    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

long fatorialRecursivo(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return (long)n * fatorialRecursivo(n - 1);
}

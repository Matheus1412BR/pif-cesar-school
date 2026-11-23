#include <stdio.h>

int somaAteN(int n);

int main(void) {
    int n, total;

    printf("Digite um inteiro positivo n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Informe um valor maior ou igual a 1.\n");
        return 1;
    }

    total = somaAteN(n);
    printf("Soma final de 1 ate %d = %d\n", n, total);

    return 0;
}

int somaAteN(int n) {
    int soma = 0;

    for (int i = 1; i <= n; i++) {
        soma += i;
#ifdef DEBUG
        printf("[DEBUG] Iteracao i = %d | Soma parcial = %d\n", i, soma);
#endif
    }

    return soma;
}

#include <stdio.h>

int maior(int a, int b);

int main(void) {
    int n1, n2;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &n1, &n2);

    printf("O maior numero e: %d\n", maior(n1, n2));

    return 0;
}

int maior(int a, int b) {
    return (a > b) ? a : b;
}

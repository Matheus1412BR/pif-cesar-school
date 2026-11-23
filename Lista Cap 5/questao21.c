#include <stdio.h>

#define SQR(x) ((x) * (x))
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define MIN(a, b) (((a) < (b)) ? (a) : (b))

void exibirResultadosMacros(int x, int y);

int main(void) {
    int a, b;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    exibirResultadosMacros(a, b);

    return 0;
}

void exibirResultadosMacros(int x, int y) {
    printf("Quadrado de %d = %d\n", x, SQR(x));
    printf("Quadrado de %d = %d\n", y, SQR(y));
    printf("Maior entre %d e %d = %d\n", x, y, MAX(x, y));
    printf("Menor entre %d e %d = %d\n", x, y, MIN(x, y));
}

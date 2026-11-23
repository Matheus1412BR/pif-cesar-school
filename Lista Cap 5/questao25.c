#include <stdio.h>

int mdc(int a, int b);
void simplifica(int num, int den);

int main(void) {
    int a, b;

    printf("Digite dois inteiros positivos (numerador e denominador): ");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0) {
        printf("Erro: informe dois inteiros estritamente positivos!\n");
        return 1;
    }

    printf("MDC(%d, %d) = %d\n", a, b, mdc(a, b));
    simplifica(a, b);

    return 0;
}

int mdc(int a, int b) {
    if (b == 0) {
        return a;
    }
    return mdc(b, a % b);
}

void simplifica(int num, int den) {
    int divisor = mdc(num, den);
    int numSimp = num / divisor;
    int denSimp = den / divisor;

    printf("Fracao original: %d/%d -> Fracao simplificada: %d/%d\n",
           num, den, numSimp, denSimp);
}

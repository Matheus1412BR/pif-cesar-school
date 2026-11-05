#include <stdio.h>
#include <math.h>

int main() {
    double x;
    printf("Digite um numero real: ");
    if (scanf("%lf", &x) != 1) return 1;

    if (x >= 0.0) {
        printf("Raiz quadrada: %.2lf\n", sqrt(x));
    } else {
        printf("Quadrado do numero: %.2lf\n", x * x);
    }
    return 0;
}

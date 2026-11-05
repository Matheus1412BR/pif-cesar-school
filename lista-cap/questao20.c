#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, delta;
    printf("Coeficientes a, b e c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a == 0) return 1;

    delta = b * b - 4 * a * c;
    if (delta < 0) printf("A equacao nao possui raizes reais.\n");
    else if (delta == 0) printf("Raiz unica: %.2lf\n", -b / (2 * a));
    else printf("Raizes: %.2lf e %.2lf\n", (-b + sqrt(delta)) / (2 * a), (-b - sqrt(delta)) / (2 * a));
    return 0;
}

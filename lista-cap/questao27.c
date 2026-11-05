#include <stdio.h>

int main() {
    int h;
    float v = 0;
    printf("Horas de permanencia: ");
    scanf("%d", &h);
    if (h <= 0) return 0;

    if (h <= 2) v = h * 2.0f;
    else if (h <= 4) v = 4.0f + (h - 2) * 2.50f;
    else v = 9.0f + (h - 4) * 3.0f;

    printf("Total a pagar: R$ %.2f\n", v);
    return 0;
}

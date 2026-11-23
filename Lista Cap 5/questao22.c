#include <stdio.h>
#include "areas.h"

void imprimirAreas(double raio, double baseRet, double altRet, double baseTri, double altTri);

int main(void) {
    double raio, baseRet, altRet, baseTri, altTri;

    printf("Digite o raio do circulo: ");
    scanf("%lf", &raio);

    printf("Digite a base e a altura do retangulo: ");
    scanf("%lf %lf", &baseRet, &altRet);

    printf("Digite a base e a altura do triangulo: ");
    scanf("%lf %lf", &baseTri, &altTri);

    imprimirAreas(raio, baseRet, altRet, baseTri, altTri);

    return 0;
}

void imprimirAreas(double raio, double baseRet, double altRet, double baseTri, double altTri) {
    printf("\n--- Areas Calculadas ---\n");
    printf("Area do Circulo   = %.2f\n", A_CIRC(raio));
    printf("Area do Retangulo = %.2f\n", A_RET(baseRet, altRet));
    printf("Area do Triangulo = %.2f\n", A_TRI(baseTri, altTri));
}

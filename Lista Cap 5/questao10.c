#include <stdio.h>

#define PI 3.14159f

float area(float r);

int main(void) {
    float raio;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    if (raio < 0.0f) {
        printf("Raio invalido! Informe um valor nao negativo.\n");
        return 1;
    }

    printf("Area da esfera = %.2f\n", area(raio));

    return 0;
}

float area(float r) {
    return 4.0f * PI * r * r;
}

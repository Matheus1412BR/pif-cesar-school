#include <stdio.h>

int main() {
    int op;
    float t;
    printf("1. C->F\n2. C->K\n3. F->C\n4. K->C\nEscolha: ");
    scanf("%d", &op);
    printf("Digite a temperatura: ");
    scanf("%f", &t);

    switch(op) {
        case 1: printf("Fahrenheit: %.2f\n", t * 1.8f + 32.0f); break;
        case 2: printf("Kelvin: %.2f\n", t + 273.15f); break;
        case 3: printf("Celsius: %.2f\n", (t - 32.0f) / 1.8f); break;
        case 4: printf("Celsius: %.2f\n", t - 273.15f); break;
        default: printf("Invalido!\n"); break;
    }
    return 0;
}

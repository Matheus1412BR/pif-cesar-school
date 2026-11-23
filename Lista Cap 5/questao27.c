#include <stdio.h>

void exibeMenu(void);
float celsiusParaFahrenheit(float c);
float celsiusParaKelvin(float c);
float fahrenheitParaCelsius(float f);
float kelvinParaCelsius(float k);

int main(void) {
    int opcao;
    float temp, convertido;

    exibeMenu();
    printf("Escolha uma opcao (1 a 4): ");
    scanf("%d", &opcao);

    if (opcao < 1 || opcao > 4) {
        printf("Opcao invalida!\n");
        return 1;
    }

    printf("Digite a temperatura: ");
    scanf("%f", &temp);

    switch (opcao) {
        case 1:
            convertido = celsiusParaFahrenheit(temp);
            printf("%.2f C = %.2f F\n", temp, convertido);
            break;
        case 2:
            convertido = celsiusParaKelvin(temp);
            printf("%.2f C = %.2f K\n", temp, convertido);
            break;
        case 3:
            convertido = fahrenheitParaCelsius(temp);
            printf("%.2f F = %.2f C\n", temp, convertido);
            break;
        case 4:
            convertido = kelvinParaCelsius(temp);
            printf("%.2f K = %.2f C\n", temp, convertido);
            break;
    }

    return 0;
}

void exibeMenu(void) {
    printf("=== CONVERSOR DE TEMPERATURAS ===\n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Celsius para Kelvin\n");
    printf("3 - Fahrenheit para Celsius\n");
    printf("4 - Kelvin para Celsius\n");
    printf("=================================\n");
}

float celsiusParaFahrenheit(float c) {
    return (c * 9.0f / 5.0f) + 32.0f;
}

float celsiusParaKelvin(float c) {
    return c + 273.15f;
}

float fahrenheitParaCelsius(float f) {
    return (f - 32.0f) * 5.0f / 9.0f;
}

float kelvinParaCelsius(float k) {
    return k - 273.15f;
}

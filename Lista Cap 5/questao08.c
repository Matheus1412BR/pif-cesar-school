#include <stdio.h>

float celsius(float fahr);

int main(void) {
    float tempF, tempC;

    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%f", &tempF);

    tempC = celsius(tempF);
    printf("Temperatura em Celsius: %.2f\n", tempC);

    return 0;
}

float celsius(float fahr) {
    return (fahr - 32.0f) * 5.0f / 9.0f;
}

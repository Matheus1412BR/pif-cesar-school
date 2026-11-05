#include <stdio.h>

int main() {
    float lab, sem, fin, media;
    printf("Nota do Trabalho de Laboratorio (peso 2): ");
    scanf("%f", &lab);
    printf("Nota da Avaliacao Semestral (peso 3): ");
    scanf("%f", &sem);
    printf("Nota do Exame Final (peso 5): ");
    scanf("%f", &fin);

    media = (lab * 2.0f + sem * 3.0f + fin * 5.0f) / 10.0f;
    printf("Media Ponderada: %.2f\n", media);

    if (media < 3.0f) {
        printf("Situacao: Reprovado\n");
    } else if (media < 5.0f) {
        printf("Situacao: Em Recuperacao\n");
    } else {
        printf("Situacao: Aprovado\n");
    }
    return 0;
}

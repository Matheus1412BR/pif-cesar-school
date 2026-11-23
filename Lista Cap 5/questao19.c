#include <stdio.h>

void contagem(int n);
void contagemProgressiva(int n);

int main(void) {
    int n;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Erro: informe um numero inteiro positivo!\n");
        return 1;
    }

    printf("\n--- Contagem Regressiva ---\n");
    contagem(n);

    printf("\n--- Contagem Progressiva (1 ate %d) ---\n", n);
    contagemProgressiva(n);
    printf("\n");

    return 0;
}

void contagem(int n) {
    if (n == 0) {
        printf("Fogo!\n");
        return;
    }
    printf("%d\n", n);
    contagem(n - 1);
}

void contagemProgressiva(int n) {
    if (n == 0) {
        return;
    }
    contagemProgressiva(n - 1);
    printf("%d ", n);
}

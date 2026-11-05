#include <stdio.h>

int main() {
    int a, b, c;
    printf("Tres angulos internos: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b + c != 180) {
        printf("Erro: Nao formam um triangulo!\n");
    } else if (a == 90 || b == 90 || c == 90) {
        printf("Triangulo Retangulo\n");
    } else if (a > 90 || b > 90 || c > 90) {
        printf("Triangulo Obtusangulo\n");
    } else {
        printf("Triangulo Acutangulo\n");
    }
    return 0;
}

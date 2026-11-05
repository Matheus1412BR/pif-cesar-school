#include <stdio.h>

int main() {
    float valor, vf, comissao;
    int op;
    printf("Valor da compra e opcao (1=A vista, 2=Parcelado 3x): ");
    scanf("%f %d", &valor, &op);

    if (op == 1) {
        vf = valor * 0.90f;
        comissao = vf * 0.05f;
        printf("Valor final a pagar: R$ %.2f\nComissao: R$ %.2f\n", vf, comissao);
    } else if (op == 2) {
        comissao = valor * 0.05f;
        printf("Parcela (3x): R$ %.2f\nComissao: R$ %.2f\n", valor / 3.0f, comissao);
    } else {
        printf("Opcao invalida!\n");
    }
    return 0;
}

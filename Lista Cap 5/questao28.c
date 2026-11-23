#include <stdio.h>

float calculaSubtotal(float preco, int quantidade);
float aplicaDesconto(float valor, int opcaoPagamento);
float calculaTroco(float total, float pago);

int main(void) {
    float preco, subtotal, total, pago, troco;
    int quantidade, opcaoPagamento;

    printf("Digite o preco unitario do produto: R$ ");
    scanf("%f", &preco);

    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    printf("Forma de pagamento (1 - A vista [10%% de desconto] | 2 - A prazo): ");
    scanf("%d", &opcaoPagamento);

    printf("Digite o valor pago pelo cliente: R$ ");
    scanf("%f", &pago);

    subtotal = calculaSubtotal(preco, quantidade);
    total = aplicaDesconto(subtotal, opcaoPagamento);
    troco = calculaTroco(total, pago);

    printf("\n=== RESUMO DA COMPRA ===\n");
    printf("Subtotal:      R$ %.2f\n", subtotal);
    printf("Total a pagar: R$ %.2f\n", total);
    if (troco < 0.0f) {
        printf("Valor insuficiente! Faltam R$ %.2f\n", -troco);
    } else {
        printf("Troco:         R$ %.2f\n", troco);
    }

    return 0;
}

float calculaSubtotal(float preco, int quantidade) {
    return preco * (float)quantidade;
}

float aplicaDesconto(float valor, int opcaoPagamento) {
    if (opcaoPagamento == 1) {
        return valor * 0.90f;
    }
    return valor;
}

float calculaTroco(float total, float pago) {
    return pago - total;
}

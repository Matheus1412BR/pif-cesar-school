#include <stdio.h>

int main() {
    int total, pago, troco;
    printf("Valor total e valor pago: ");
    scanf("%d %d", &total, &pago);
    if (pago < total) { printf("Insuficiente!\n"); return 1; }

    troco = pago - total;
    printf("Troco: %d\n", troco);
    printf("100: %d\n50: %d\n20: %d\n10: %d\n5: %d\n2: %d\n",
           troco/100, (troco%100)/50, ((troco%100)%50)/20,
           (((troco%100)%50)%20)/10, ((((troco%100)%50)%20)%10)/5,
           (((((troco%100)%50)%20)%10)%5)/2);
    return 0;
}

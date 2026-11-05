a) A saida do programa sera "Opção A", pois como a condição x > 10 é verdadeira (15 > 10), o bloco do primeiro if é executado. A mensagem "Opção A" é impressa. Pela regra de associação sem chaves, a instrução else pertence ao segundo if (y > 10). Como o bloco else só seria avaliado se a condição x > 10 fosse falsa, a testagem interna de y nem chega a interferir na execução da "Opção B".
b) Na linguagem C, quando não são utilizadas chaves de bloco { }, a regra sintática determina que uma cláusula else sempre se associa ao if mais próximo não associado a outro else anterior, independentemente da formatação ou indentação do código.
c) #include <stdio.h>

int main() {
    int x = 15, y = 5;

    if (x > 10) {
        if (y > 10) {
            printf("Opção A\n");
        }
    } else {
        printf("Opção B\n");
    }
    return 0;
}

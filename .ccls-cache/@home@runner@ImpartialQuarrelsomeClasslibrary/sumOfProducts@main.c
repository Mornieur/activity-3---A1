#include <stdio.h>

int main() {
    int num, soma = 0;
    printf("Entre com um numero inteiro: ");
    scanf("%d", &num);
    for (int i = 1; i <= 6; i++) {
        int produto = num * i;
        soma += produto;
    }
    printf("Soma dos produtos: %d\n", soma);
    return 0;
}

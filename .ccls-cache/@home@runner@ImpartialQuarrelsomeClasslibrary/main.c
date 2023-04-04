#include <stdio.h>

int main() {
    int dia, mes, ano;
    
    printf("Digite o dia do aniversario: ");
    scanf("%d", &dia);
    
    printf("Digite o mes do aniversario: ");
    scanf("%d", &mes);
    
    printf("Digite o ano do aniversario: ");
    scanf("%d", &ano);
    
    if (ano < 1940 || ano > 2022) {
        printf("Ano invalido\n");
    } else if (mes < 1 || mes > 12) {
        printf("Mes invalido\n");
    } else if (dia < 1 || dia > 31) {
        printf("Dia invalido\n");
    } else {
        printf("Data valida\n");
    }
    
    return 0;
}

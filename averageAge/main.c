#include <stdio.h>

int main() {
    int contador = 0, idade, soma = 0;
    float media;
    
    while (1) {
        printf("Digite a idade ou 0 para sair: ");
        scanf("%d", &idade);
        if(idade == 0){
            break;
        }
        soma += idade;
        contador++;
    }
    
    if (contador == 0) {
        printf("Nenhuma idade foi informada.\n");
    } else {
        media = (float)soma / contador;
        printf("A média das idades é %.2f. Total de pessoas lidas: %d\n", media, contador);
    }
    
    return 0;
}

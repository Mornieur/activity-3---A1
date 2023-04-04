#include <stdio.h>

int main() {
    char nome[50];
    int pontos = 0;
    
    printf("Digite o seu nome: ");
    scanf("%s", nome);
    
    printf("Etapa 1:\n");
    char escolha1;
    printf("Ganhou (S/N)? ");
    scanf(" %c", &escolha1);
    if (escolha1 == 'S') {
        pontos += 10;
    } else {
        pontos -= 5;
    }
    
    printf("Etapa 2:\n");
    char escolha2;
    printf("Ganhou (S/N)? ");
    scanf(" %c", &escolha2);
    if (escolha2 == 'S') {
        pontos += 20;
    } else {
        pontos -= 10;
    }
    
    printf("Etapa 3:\n");
    char escolha3;
    printf("Ganhou (S/N)? ");
    scanf(" %c", &escolha3);
    if (escolha3 == 'S') {
        pontos += 50;
    } else {
        pontos = 0;
    }
    
    printf("Parabens, %s! Voce fez %d pontos!\n", nome, pontos);
    
    return 0;
}
#import <stdio.h>
#include <locale.h>
void main (){
    setlocale(LC_ALL, "Portuguese");
    char nome[35];
    int idade;
    float peso;
    printf("<<< EX003 - Dados >>>\n\n");
    printf("Qual � o seu nome? ");
    gets (nome);
    printf("Quantos anos voc� tem? ");
    scanf("%i", &idade);
    printf("Qual � o seu peso? (kg) ");
    scanf("%f", &peso);
    printf("\n-------<<< PROCESSANDO >>>-------\n");
    printf("Muito prazer, %s. Voc� tem %i anos e pesa %.2fKg, correto?\nFIM.", nome, idade, peso);
}

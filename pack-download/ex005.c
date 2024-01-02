#import <stdio.h>
#import <stdlib.h>
#import <time.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    int num2;
    printf("Vou pensar em um número entre 1 e 5. Tente adivinhar!\n");
    printf("Qual é o seu palpite? ");
    scanf("%i", &num2);
    srand(time(NULL));
    int num = rand() % 5 + 1;
    printf("Eu pensei no número %i e você pensou no %i",num,num2);
}

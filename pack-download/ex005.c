#import <stdio.h>
#import <stdlib.h>
#import <time.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    int num2;
    printf("Vou pensar em um n�mero entre 1 e 5. Tente adivinhar!\n");
    printf("Qual � o seu palpite? ");
    scanf("%i", &num2);
    srand(time(NULL));
    int num = rand() % 5 + 1;
    printf("Eu pensei no n�mero %i e voc� pensou no %i",num,num2);
}

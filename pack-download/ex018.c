#include <locale.h>
#include <time.h>
#include <stdlib.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    time_t t;
    time(&t);
    struct tm*data;
    data = localtime(&t);
    int a = data -> tm_year;
    int nascimento,idade_atual, ano;
    ano = a + 1900;
    printf("<<< EX018 - Servi�o Militar v1.0 >>>\n\n");
    printf("Atualmente estamos no ano de %i.\n", ano);
    printf("Em que ano voc� nasceu? ");
    scanf("%i",&nascimento);
    idade_atual = ano - nascimento;
    printf("----------------------------------\n");
    printf("Sua idade atual � de %i anos.",idade_atual);
    if (idade_atual > 18) {
        printf("\nJ� fez 18 anos. Espero sinceramente que voc� tenha se alistado.");
    } else if (idade_atual < 18) {
        printf("\nVoc� ainda n�o tem 18 anos. N�o pode se alistar.");
    } else {
        printf("\nEste � o seu ano de alistamento. Procure o posto militar mais pr�ximo de sua resid�ncia.");
    }
}

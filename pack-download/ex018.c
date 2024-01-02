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
    printf("<<< EX018 - Serviço Militar v1.0 >>>\n\n");
    printf("Atualmente estamos no ano de %i.\n", ano);
    printf("Em que ano você nasceu? ");
    scanf("%i",&nascimento);
    idade_atual = ano - nascimento;
    printf("----------------------------------\n");
    printf("Sua idade atual é de %i anos.",idade_atual);
    if (idade_atual > 18) {
        printf("\nJá fez 18 anos. Espero sinceramente que você tenha se alistado.");
    } else if (idade_atual < 18) {
        printf("\nVocê ainda não tem 18 anos. Não pode se alistar.");
    } else {
        printf("\nEste é o seu ano de alistamento. Procure o posto militar mais próximo de sua residência.");
    }
}

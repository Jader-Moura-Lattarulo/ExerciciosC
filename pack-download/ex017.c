#include <stdio.h>
#include <locale.h>
#include <time.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    time_t t;
    time(&t);
    struct tm *data;
    data=localtime(&t);
    int ano_atual= data -> tm_year + 1900;
    int ano_nasc, idade;
    printf("Em que ano voc� nasceu? ");
    fflush(stdin);
    scanf("%i", &ano_nasc);
    idade = ano_atual - ano_nasc;
    printf("--------------------------\n");
    printf("Voc� tem %i anos, certo?\n", idade);
    printf("Seja bem-vindo(a) ao Banco Estudonauta!\n");
    if (idade >= 65) {
        printf("=== ATEN��O! DIRIJA-SE PARA A FILA PREFERENCIAL ===\n");
    }
    printf("--------------------------\n");
}

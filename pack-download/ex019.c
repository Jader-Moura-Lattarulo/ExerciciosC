#include <stdlib.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    int ano;
    printf("<<< EX019 - Ano Bissexto >>>\n\n");
    printf("Digite um ano qualquer: ");
    scanf("%i", &ano);
    if (ano % 4 == 0) {
        printf("O ano %i é bissexto.", ano);
    } else if (ano%100 == 0) {
        printf("O ano %i é bissexto.", ano);
    } else if (ano%400 == 0) {
        printf("O ano %i é bissexto.", ano);
    } else {
        printf("O ano %i não é bissexto.", ano);
    }
}

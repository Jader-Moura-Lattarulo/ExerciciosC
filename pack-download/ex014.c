#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    int numa, numb;
    printf("<<< EX014 - Operadores de Deslocamento >>>\n\n");
    printf("Digite um número: ");
    scanf("%i", &numa);
    printf("Digite o deslocamento: ");
    scanf("%i", &numb);
    printf("------- OPERAÇÕES SHIFT -------\n");
    printf("Calculando %i >> %i é igual a %i\n",numa,numb,(numa>>numb));
    printf("Calculando %i << %i é igual a %i\n",numa,numb,(numa<<numb));
}

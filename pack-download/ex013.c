#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    int numa,numb;
    printf("<<< EX013 - Operadores Bitwise >>>\n\n");
    printf("Digite o primeiro valor: ");
    scanf("%i",&numa);
    printf("Digite o segundo valor: ");
    scanf("%i", &numb);
    printf("------- OPERA��ES BITWISE -------\n");
    printf("Calculando %i & %i � igual a: %i\n",numa,numb,(numa&numb));
    printf("Calculando %i | %i � igual a: %i\n",numa,numb,(numa|numb));
    printf("Calculando %i ^ %i � igual a: %i ",numa,numb,(numa^numb));
}

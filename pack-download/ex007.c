#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    printf("<<< EX007 - Dobro e Ter�a Parte >>>\n\n");
    int num;
    printf("Digite um n�mero: ");
    scanf("%i", &num);
    int dob = num*2;
    float ter = num/3.0;
    printf("Analisando o n�mero %i, seu dobro � %i e sua ter�a parte � %4.2f.\n", num, dob, ter);
}

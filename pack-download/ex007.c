#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    printf("<<< EX007 - Dobro e Terça Parte >>>\n\n");
    int num;
    printf("Digite um número: ");
    scanf("%i", &num);
    int dob = num*2;
    float ter = num/3.0;
    printf("Analisando o número %i, seu dobro é %i e sua terça parte é %4.2f.\n", num, dob, ter);
}

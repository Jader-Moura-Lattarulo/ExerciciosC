#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL,"Portuguese");
    int num;
    printf("<< EX006 - Antecessor e Sucessor >>>\n\n");
    printf("Digite um n�mero: ");
    scanf("%d",&num);
    int ant = num - 1;
    int pos = num + 1;
    printf("Analisando o n�mero %d, seu antecessor � %d e seu sucessor � %d.\n",num,ant,pos);
}

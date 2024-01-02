#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL,"Portuguese");
    int num;
    printf("<< EX006 - Antecessor e Sucessor >>>\n\n");
    printf("Digite um número: ");
    scanf("%d",&num);
    int ant = num - 1;
    int pos = num + 1;
    printf("Analisando o número %d, seu antecessor é %d e seu sucessor é %d.\n",num,ant,pos);
}

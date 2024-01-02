#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    printf("<<< EX012 - Situação do Aluno >>>\n\n");
    float n01, n02, m;
    printf("Primeira nota: ");
    scanf("%f", &n01);
    printf("Segunda nota: ");
    scanf("%f", &n02);
    m = (n01+n02)/2;
    printf("A média do alino foi %2.1f.\n",m);
    printf("A sua situação é %s!",(m>=6)?"APROVADO":"REPROVADO");
}

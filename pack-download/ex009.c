#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL,"Portuguese");
    printf("<<< EX009 - Média do Aluno >>>\n\n");
    char nome[20];
    float n1, n2;
    printf("Nome do aluno: ");
    gets(nome);
    printf("Nota 1: ");
    scanf("%f",&n1);
    printf("Nota 2: ");
    scanf("%f",&n2);
    float m = (n1+n2)/2;
    printf ("O aluno %s tirou notas %2.1f e %2.1f e ficou com média %2.1f.\n",nome, n1, n2, m);
}

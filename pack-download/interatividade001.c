#import <stdio.h>
#import <locale.h>
void main () {
    setlocale(LC_ALL, "Portuguese");
    /*int n;
    float m;
    printf("Digite um n�mero inteiro: ");
    scanf("%i", &n);
    printf("Digite um n�mero real: ");
    scanf("%f", &m);
    printf("Voc� acabou de digitar os valores %i e %.2f. Obrigado!", n, m);*/
    char r;
    char s;
    printf("Digite s� uma letra: ");
    fflush(stdin);
    scanf("%c", &r);
    printf("Digite outra letra: ");
    fflush(stdin);
    scanf("%c", &s);
    printf("Voc� digitou as letras \"%c\" e \"%c\"", r, s);
}

#include <stdlib.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    float distancia, custo;
    printf("<<< EX020 - Pre�o da Passagem >>>\n\n");
    printf("======== TABELA DE PRE�OS ========\n");
    printf("Viagens at� 200 km \t R$0.50/km\n");
    printf("A partir de 200 km \t R$0.35/km\n");
    printf("-------------------------------\n");
    printf("Dist�ncia total da viagem em Km: ");
    scanf("%f",&distancia);
    if (distancia >= 200) {
        custo = distancia*0.35;
        printf("Uma viagem de %.1f vai custar R$0,35/Km.\n",distancia);
        printf("Valor Total: R$%.2f.",custo);
    } else {
        custo = distancia*0.50;
        printf("Uma viagem de %.1f vai custar R$0,50/Km.\n", distancia);
        printf("Valor Total: R$%.2f.",custo);
    }
}

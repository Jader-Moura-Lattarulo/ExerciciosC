#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL,"Portuguese");
    float valor,desc;
    printf("<<< EX016 - Consumidor ganha desconto >>>\n\n");
    printf("Qual foi o valor total das compras? R$");
    fflush(stdin);
    scanf("%f",&valor);
    printf("-----------------------------------\n");
    printf("Voc� comprou R$%.2f na nossa loja.\n",valor);
    if (valor >= 500.00) {
        desc = (valor*10)/100;
        printf("==================== ATEN��O ====================\n");
        printf("Por fazer mais de R$500,00 em compras, voc� vaai receber R$%.2f de desconto.\n", desc);
        printf("O valor a ser pago � R$%.2f! ",(valor-desc));
    }
    printf("Volte Sempre!\n");
    printf("-----------------------------------\n");
}

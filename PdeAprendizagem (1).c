#include <stdio.h>
#include <math.h>

int main() {
    float valor, desconto, valorInicial, entrada, parcelas,porc;
    char escolha;
    float valorPago, troco;
    int quantidade;

    printf("Qual o valor do produto?: ");
    scanf("%f", &valor);

    valorInicial = valor;

    printf("Voce quer pagar a vista ou a parcelado? (V ou P respectivamente): ");
    fflush(stdin);
    scanf(" %c", &escolha);

    switch (escolha) {
        case 'v':
        case 'V':
            if (valor <= 300) {
                desconto = valor * 0.05;
                valor = valor - desconto;
       
            } else if (valor <= 500) {
                desconto = valor * 0.07;
                valor = valor - desconto;
       
            } else if (valor <= 800) {
                desconto = valor * 0.1;
               
                valor = valor - desconto;
       
            } else if (valor <= 1000) {
                desconto = valor * 0.12;
             
                valor = valor - desconto;
              
            } else if (valor > 1000) {
                desconto = valor * 0.15;
               
                valor = valor - desconto;
            }


            porc = (desconto / valorInicial) * 100;
            printf("Desconto: %.2f%%\n", porc);
            printf("Valor do desconto: R$ %.2f\n", desconto);
            printf("Valor a pagar: R$ %.2f\n", valor);

            printf("Digite o valor pago: ");
            scanf("%f", &valorPago);

                troco = valorPago - valor;

                printf("Troco: R$ %.2f\n", troco);

                quantidade = troco / 200;
                troco -= quantidade * 200;
                printf("Notas de R$ 200: %d\n", quantidade);

                quantidade = troco / 100;
                troco -= quantidade * 100;
                printf("Notas de R$ 100: %d\n", quantidade);

                quantidade = troco / 50;
                troco -= quantidade * 50;
                printf("Notas de R$ 50: %d\n", quantidade);

                quantidade = troco / 20;
                troco -= quantidade * 20;
                printf("Notas de R$ 20: %d\n", quantidade);

                quantidade = troco / 10;
                troco -= quantidade * 10;
                printf("Notas de R$ 10: %d\n", quantidade);

                quantidade = troco / 5;
                troco -= quantidade * 5;
                printf("Notas de R$ 5: %d\n", quantidade);

                quantidade = troco / 2;
                troco -= quantidade * 2;
                printf("Notas de R$ 2: %d\n", quantidade);

                quantidade = troco / 1;
                troco -= quantidade * 1;
                printf("Moedas de R$ 1: %d\n", quantidade);

                quantidade = troco / 0.50;
                troco -= quantidade * 0.50;
                printf("Moedas de R$ 0.50: %d\n", quantidade);

                quantidade = troco / 0.25;
                troco -= quantidade * 0.25;
                printf("Moedas de R$ 0.25: %d\n", quantidade);

                quantidade = troco / 0.10;
                troco -= quantidade * 0.10;
                printf("Moedas de R$ 0.10: %d\n", quantidade);

                quantidade = troco / 0.05;
                troco -= quantidade * 0.05;
                printf("Moedas de R$ 0.05: %d\n", quantidade);

                quantidade = troco / 0.01;
                troco -= quantidade * 0.01;
                printf("Moedas de R$ 0.01: %d\n", quantidade);


            printf("Obrigado pela compra =)");
            break;
        case 'p':
        case 'P':
            parcelas = floor(valor/3.0);
            entrada = valor - 2 * parcelas;
            printf("Entrada %.2f e duas parcelas de %.2f",entrada,parcelas);

            printf("\nObrigado pela compra =)");

            break;
        default:
            printf("Opcao invalida.\n");
            return 1;
    }

    return 0;
}

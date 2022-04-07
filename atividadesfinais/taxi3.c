#include <stdio.h>

int main(){
    printf("Escola Senai, Euclides Facchini\n");
    printf("Lucas Dos Santos Pastreis\n");

    float numeroDaBandeira;
    float kilometragem;
    int escolhaBandeira;
    float taxaMinima = 3.50;
    float valor_corrida;
    int desconto;

    printf("Digite o número da bandeira 1 ou 2: \n");
    scanf("%d", &escolhaBandeira);
    printf("Digite a kilometragem rodada: \n");
    scanf("%f", &kilometragem);

    if(escolhaBandeira == 1){
        numeroDaBandeira = 1.80;
    }
    if(escolhaBandeira == 2){
        numeroDaBandeira = 2.30;
    }
    
    valor_corrida = numeroDaBandeira * kilometragem;

    if(valor_corrida < taxaMinima){
        printf("O valor da corrida é: %.2f\n", taxaMinima);
    } 
    if(valor_corrida > taxaMinima){
        printf("O valor da corrida é: %.2f\n", valor_corrida);
        printf("Deseja aplica o desconto? (1 - Sim ou 2 - Nao) ");
        scanf("%d", &desconto);

        if(desconto == 1){
        printf("Desconto de 30%% aplicado, valor resultante de R$%.2f" , (valor_corrida * 70) / 100);
        }
    }
}
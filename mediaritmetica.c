#include <stdio.h>

int main(){

printf("Escola Senai, Euclides Facchini\n");
printf("Lucas Dos Santos Pastreis\n");

int numero;
int quantidade;
double media = 0;

printf("De quantos números voce deseja calcular a média: ");
scanf("%d", &quantidade);

for(int i = 0; i < quantidade; i++){
    printf("Digite um número: ");
    scanf("%d", &numero);
    media = media + numero;

}

double resultado = media / quantidade;
printf("A média dos números fornecidos é: %.1f", resultado);

}   

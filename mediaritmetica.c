#include <stdio.h>

int main(){

printf("Escola Senai, Euclides Facchini\n");
printf("Lucas Dos Santos Pastreis\n");

int numero;
int quantidade;
double media = 0;

printf("De quantos n�meros voce deseja calcular a m�dia: ");
scanf("%d", &quantidade);

for(int i = 0; i < quantidade; i++){
    printf("Digite um n�mero: ");
    scanf("%d", &numero);
    media = media + numero;

}

double resultado = media / quantidade;
printf("A m�dia dos n�meros fornecidos �: %.1f", resultado);

}   

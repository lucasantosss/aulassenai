#include <stdio.h>

int main(){

printf("Escola Senai, Euclides Facchini\n");
printf("Lucas Dos Santos Pastreis\n");

int numero1;
int numero2;

printf("Digite o primeiro n�mero inteiro: ");
scanf("%d", &numero1);
printf("Digite o segundo n�mero inteiro: ");
scanf("%d", &numero2);

if (numero1 > numero2){
    printf("A diferen�a do maior pelo menor numero �: %d", numero1 - numero2);
    
}
else{
    printf("A diferen�a do maior pelo menor numero �: %d", numero2 - numero1);

}
}

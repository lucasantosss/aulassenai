#include <stdio.h>

int main(){

printf("Escola Senai, Euclides Facchini\n");
printf("Lucas Dos Santos Pastreis\n");

int numero1;
int numero2;

printf("Digite o primeiro número inteiro: ");
scanf("%d", &numero1);
printf("Digite o segundo número inteiro: ");
scanf("%d", &numero2);

if (numero1 > numero2){
    printf("A diferença do maior pelo menor numero é: %d", numero1 - numero2);
    
}
else{
    printf("A diferença do maior pelo menor numero é: %d", numero2 - numero1);

}
}

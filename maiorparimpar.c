#include <stdio.h>

int main(){

printf("Escola Senai, Euclides Facchini\n");
printf("Lucas Dos Santos Pastreis\n");

int numero;
int numero2;

printf("Digite um n�mero inteiro: ");
scanf("%d", &numero);
printf("Digite outro n�mero inteiro: ");
scanf("%d", &numero2);

if(numero > numero2 && numero % 2 == 0){
    printf("O primeiro n�mero � maior que o segundo e par");
}
if (numero > numero2 && numero % 2 != 0){
    printf("O primeiro n�mero � maior que o segundo e impar");
}  

if(numero < numero2 && numero2 %2 == 0){
    printf("O segundo n�mero � maior que o primeiro e par");
}

if(numero < numero2 && numero2 %2 != 0){
    printf("O segundo n�mero � maior que o primeiro e impar");
       
    }    

     }





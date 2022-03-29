#include <stdio.h>

int main(){

printf("Escola Senai, Euclides Facchini\n");
printf("Lucas Dos Santos Pastreis\n");
  
int numeroPositivo;

printf("Digite um número inteiro positivo");
scanf("%d", &numeroPositivo);
printf("Os números impares menores são: %d\n", numeroPositivo);

for(int i = 1.; i <= numeroPositivo; i++){
    if(i %2 == 1){
        printf("%d\n", i);

    }
}
}
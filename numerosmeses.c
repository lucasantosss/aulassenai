#include <stdio.h>

int main(){

printf("Escola Senai, Euclides Facchini\n");
printf("Lucas Dos Santos Pastreis\n");

int numero;

printf("Digite um n�mero inteiro de 1 a 12 correspondente ao mes desejado: ");
scanf("%d", &numero);

if(numero == 1){
    printf("O n�mero corresponde ao mes de Janeiro");
}

if(numero == 2){
    printf("O n�mero corresponde ao mes de Fevereiro");
}

if(numero == 3){
    printf("O n�mero corresponde ao mes de Mar�o");
}

if(numero == 4){
    printf("O n�mero corresponde ao mes de Abril");
}

if(numero == 5){
    printf("O n�mero corresponde ao mes de Maio");
}

if(numero == 6){
    printf("O n�mero corresponde ao mes de Junho");
}

if(numero == 7){
    printf("O n�mero corresponde ao mes de Julho");
}

if(numero == 8){
    printf("O n�mero corresponde ao mes de Agosto");
}

if(numero == 9){
    printf("O n�mero corresponde ao mes de Setembro");
}

if(numero == 10){
    printf("O n�mero corresponde ao mes de Outubro");
}

if(numero == 11){
    printf("O n�mero corresponde ao mes de Novembro");
}

if(numero == 12){
    printf("O n�mero corresponde ao mes de Dezembro");
}
else{
    printf("N�mero n�o � correspondente");

}
}

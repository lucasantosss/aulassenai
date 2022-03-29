#include <stdio.h>

int main(){

printf("Escola Senai, Euclides Facchini\n");
printf("Lucas Dos Santos Pastreis\n");

int numero;

printf("Digite um número inteiro de 1 a 12 correspondente ao mes desejado: ");
scanf("%d", &numero);

if(numero == 1){
    printf("O número corresponde ao mes de Janeiro");
}

if(numero == 2){
    printf("O número corresponde ao mes de Fevereiro");
}

if(numero == 3){
    printf("O número corresponde ao mes de Março");
}

if(numero == 4){
    printf("O número corresponde ao mes de Abril");
}

if(numero == 5){
    printf("O número corresponde ao mes de Maio");
}

if(numero == 6){
    printf("O número corresponde ao mes de Junho");
}

if(numero == 7){
    printf("O número corresponde ao mes de Julho");
}

if(numero == 8){
    printf("O número corresponde ao mes de Agosto");
}

if(numero == 9){
    printf("O número corresponde ao mes de Setembro");
}

if(numero == 10){
    printf("O número corresponde ao mes de Outubro");
}

if(numero == 11){
    printf("O número corresponde ao mes de Novembro");
}

if(numero == 12){
    printf("O número corresponde ao mes de Dezembro");
}
else{
    printf("Número não é correspondente");

}
}

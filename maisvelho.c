#include <stdio.h>

int main(){

printf("Escola Senai, Euclides Facchini\n");
printf("Lucas Dos Santos Pastreis\n");

int pedro = 19;
int ismael = 20;
int joana = 15;

printf("Digite a idade de Pedro: ");
scanf("%d", &pedro);
printf("Digite a idade de Ismael: ");
scanf("%d", &ismael);
printf("Digite a idade de Joana: ");
scanf("%d", &joana);

if(joana > pedro && joana > ismael){
    printf("Pedro é o mais velho\n");
}

else if(pedro > joana && pedro > ismael){
    printf("Ismael é o mais velho\n");
}
else{
    printf("Ismael é o mais velho dentre os tres");
}

}
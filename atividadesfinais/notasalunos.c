#include <stdio.h>

int main(){
    printf("Escola Senai, Euclides Facchini\n");
    printf("Lucas Dos Santos Pastreis\n");

    int cont;
    float nota, soma = 0, maior = 0, menor = 10;

    for (cont = 1; cont <= 10; cont++){
        printf("Digite a %d.a nota: ", cont);
        scanf("%f", &nota);
        //Validar nota
        if(nota <0 && nota>10){
            printf("\nDados incorretos. A nota deve estar entre 0 e 10: ");
            scanf("%f", &nota);
        }
        soma = soma + nota:

        if (nota > maior){
            maior = nota;
        }
        if (nota < menor){
            menor = nota;
        } 
    }

        printf("\n A soma das notas �: %.1f\n", soma);
        printf("\n A m�dia das fornecidos �: %.1f\n", soma / 10);
        printf("\n A maior nota �: %.1f\n", maior);
        printf("\n A menor nota �: %.1f\n", menor);   
}
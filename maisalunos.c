#include <stdio.h>

int main(){

printf("Escola Senai, Euclides Facchini\n");
printf("Lucas Dos Santos Pastreis\n");

int alunos;
int alunas;

printf("Digite a quantidade de alunos:\n");
scanf("%d", &alunos);
printf("Digite a quantidade de alunas:\n");
scanf("%d", &alunas);

if(alunos > alunas){
    printf("Existem mais alunos do que alunas \n");
}
else{
    printf("Existem mais alunas do que alunos \n");  
}
}    


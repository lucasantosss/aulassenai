#include <stdio.h>
#define NUMERO_DE_TENTATIVAS 5
int main(){
    //imprime cabeçalho do jogo
    printf("**************************************\n");
    printf("Bem vindo ao nosso jogo de adivinhação\n");
    printf("**************************************\n");
    
    //int numerodetentativas = 5;
    int numerosecreto = 42;
    int chute;

    for(int i = 1; i <= NUMERO_DE_TENTATIVAS; i++){
    printf("Tentativa %d de %d\n", i, NUMERO_DE_TENTATIVAS);    
    printf("Informe seu chute");

    scanf("%d", &chute);
    printf("Seu chute foi o número %d\n", chute);
    
    if(chute < 0){
    printf("Número inválido\n");
    i--;

    continue;

    } 

    int acertou = (chute == numerosecreto);
    int maior = chute > numerosecreto;
    int menor = chute > numerosecreto;

    if(acertou){
        printf("Parabéns, voce acertou!\n");
        printf("Jogue de novo, voce é um bom jogador!\n");
        //parar de executar o for

        break;
    }

        else if(maior){
            printf("Seu chute foi maior que o número secreto\n");
        }

        else {
            printf("Seu chute foi menor que o número secreto\n");

         
        }           
    }
    
}


     
    


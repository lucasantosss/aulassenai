#include <stdio.h>
#define NUMERO_DE_TENTATIVAS 5
int main(){
    //imprime cabe�alho do jogo
    printf("**************************************\n");
    printf("Bem vindo ao nosso jogo de adivinha��o\n");
    printf("**************************************\n");
    
    //int numerodetentativas = 5;
    int numerosecreto = 42;
    int chute;

    for(int i = 1; i <= NUMERO_DE_TENTATIVAS; i++){
    printf("Tentativa %d de %d\n", i, NUMERO_DE_TENTATIVAS);    
    printf("Informe seu chute");

    scanf("%d", &chute);
    printf("Seu chute foi o n�mero %d\n", chute);
    
    if(chute < 0){
    printf("N�mero inv�lido\n");
    i--;

    continue;

    } 

    int acertou = (chute == numerosecreto);
    int maior = chute > numerosecreto;
    int menor = chute > numerosecreto;

    if(acertou){
        printf("Parab�ns, voce acertou!\n");
        printf("Jogue de novo, voce � um bom jogador!\n");
        //parar de executar o for

        break;
    }

        else if(maior){
            printf("Seu chute foi maior que o n�mero secreto\n");
        }

        else {
            printf("Seu chute foi menor que o n�mero secreto\n");

         
        }           
    }
    
}


     
    


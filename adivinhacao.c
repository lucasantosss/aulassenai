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
    int ganhou = 0;
    int tentativas = ganhou + 1;
    int pontos = 1000;
    
    while(ganhou == 0){  

    printf("Tentativa %d\n", tentativas);    
    printf("Informe seu chute ");

    scanf("%d", &chute);
    printf("Seu chute foi %d\n", chute);
    
    if(chute < 0){
    printf("N�mero inv�lido\n");
    tentativas--;
    continue;
    
    }
 
    int acertou = (chute == numerosecreto);
    int maior = chute > numerosecreto;
    int menor = chute > numerosecreto;
    int pontos =  pontos * 2;

    if(acertou){
        printf("Parab�ns, voce acertou!\n");
        printf("Jogue de novo, voce � um bom jogador!\n");
        printf("Voce acertou na tentativa %d\n",  tentativas);
        ganhou = 1;
        //parar de executar o for

    }

        else if(maior){
            printf("Seu chute foi maior que o n�mero secreto\n");
        }

        else {
            printf("Seu chute foi menor que o n�mero secreto\n");
        }    
    
        tentativas++;
 
        int pontosperdidos = (chute - numerosecreto / 2;
        pontos = pontos - pontosperdidos;

        }

        printf("Fim de jogo!\n");
        printf("Voce acertou em %d tentativas!\n", tentativas);
        printf("Total de pontos: %d\n", pontos);    

         
        }           
    
    




     
    


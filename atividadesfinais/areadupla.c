#include <stdio.h>

int main(){
    printf("Escola Senai, Euclides Facchini\n");
    printf("Lucas Dos Santos Pastreis\n");

    int baseDoPrimeiro;
    int alturaDoPrimeiro;
    int baseDoSegundo;
    int alturaDoSegundo;

    printf("Digite a base do retângulo A em cm:\n ");
    scanf("%d", &baseDoPrimeiro);
    printf("Digite a altura do retâmgulo A em cm:\n ");
    scanf("%d", &alturaDoPrimeiro);
    printf("Digite a base do retângulo B em cm:\n ");
    scanf("%d", &baseDoSegundo);
    printf("Digite a altura do retângulo B em cm:\n ");
    scanf("%d", &alturaDoSegundo);

    //double areaA = baseDoPrimeiro * alturaDoPrimeiro;
    // double areaB = baseDoSegundo * alturaDoSegundo;

    printf("A área do retângulo A: %.1f\n", baseDoPrimeiro * alturaDoPrimeiro);
    printf("A área do retângulo B: %.1f\n", baseDoSegundo * alturaDoSegundo);

    //int areaA;
    //int areaB;

    if(baseDoPrimeiro * alturaDoPrimeiro > baseDoSegundo * alturaDoSegundo)
    {
        printf("A área do retângulo A é maior que a área B\n");
    }
    if(baseDoPrimeiro * alturaDoPrimeiro < baseDoSegundo * alturaDoSegundo)
    {
        printf("A área do retângulo B é maior que a área A\n");
    } 
     if(baseDoPrimeiro * alturaDoPrimeiro == baseDoSegundo * alturaDoSegundo)
    {
        printf("Os dois retângulos - A e B - são iguais");
    } 
    
}

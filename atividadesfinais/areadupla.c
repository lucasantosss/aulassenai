#include <stdio.h>

int main(){
    printf("Escola Senai, Euclides Facchini\n");
    printf("Lucas Dos Santos Pastreis\n");

    int baseDoPrimeiro;
    int alturaDoPrimeiro;
    int baseDoSegundo;
    int alturaDoSegundo;

    printf("Digite a base do ret�ngulo A em cm:\n ");
    scanf("%d", &baseDoPrimeiro);
    printf("Digite a altura do ret�mgulo A em cm:\n ");
    scanf("%d", &alturaDoPrimeiro);
    printf("Digite a base do ret�ngulo B em cm:\n ");
    scanf("%d", &baseDoSegundo);
    printf("Digite a altura do ret�ngulo B em cm:\n ");
    scanf("%d", &alturaDoSegundo);

    //double areaA = baseDoPrimeiro * alturaDoPrimeiro;
    // double areaB = baseDoSegundo * alturaDoSegundo;

    printf("A �rea do ret�ngulo A: %.1f\n", baseDoPrimeiro * alturaDoPrimeiro);
    printf("A �rea do ret�ngulo B: %.1f\n", baseDoSegundo * alturaDoSegundo);

    //int areaA;
    //int areaB;

    if(baseDoPrimeiro * alturaDoPrimeiro > baseDoSegundo * alturaDoSegundo)
    {
        printf("A �rea do ret�ngulo A � maior que a �rea B\n");
    }
    if(baseDoPrimeiro * alturaDoPrimeiro < baseDoSegundo * alturaDoSegundo)
    {
        printf("A �rea do ret�ngulo B � maior que a �rea A\n");
    } 
     if(baseDoPrimeiro * alturaDoPrimeiro == baseDoSegundo * alturaDoSegundo)
    {
        printf("Os dois ret�ngulos - A e B - s�o iguais");
    } 
    
}

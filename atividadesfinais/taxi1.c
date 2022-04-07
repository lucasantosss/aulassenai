#include <stdio.h>

int main()
{

    printf("Escola Senai, Euclides Facchini\n");
    printf("Lucas Dos Santos Pastreis\n");

    double numeroBandeira = 1.80;
    double numeroBandeira2 = 2.30;
    int escolhaBandeira;
    int kilometragem;

    printf("Escolha a Bandeira 1 ou 2:\n");
    scanf("%d", &escolhaBandeira);

    if(escolhaBandeira == 1)
    {
        printf("Digite a kilometragem:\n");
        scanf("%d", &kilometragem);
        printf("O valor da corrida é %.2f", kilometragem * numeroBandeira);
    }
    else if(escolhaBandeira == 2)
    {
        printf("Digite a kilometragem:\n");
        scanf("%d", &kilometragem);
        printf("O valor da corrida é %.2f", kilometragem * numeroBandeira2);
    }
}



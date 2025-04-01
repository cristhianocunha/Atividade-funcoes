#include <stdio.h>
#include <stdlib.h>
// Protótipos
void cabecalho();
float calcularMedia(float notas[], int quantidade);
void imprimirResultado(float media);

int main()
{
    int quantidade = 2;
    cabecalho();
    printf("Qual e quantidade de notas? \n");
    scanf("%d", &quantidade);

    float *notas = (float *)malloc(quantidade * sizeof(float));
    if (notas == NULL)
    {
        printf("erro na alocação de memoria");
        return 1;
    }

    for (int i = 0; i < quantidade; ++i)
    {
        printf("Digite nota %d \n", i + 1);
        scanf("%f", &notas[i]);
    }

    imprimirResultado(calcularMedia(notas, quantidade));
    free(notas);
    return 0;
}

void cabecalho()
{
    printf("=== CALCULADORA DE MÉDIAS ===\n\n");
}

float calcularMedia(float notas[], int quantidade)
{
    float somasdasmedias = 0;
    for (int i = 0; i < quantidade; ++i)
    {
        somasdasmedias += notas[i];
    }

    return somasdasmedias / quantidade;
}

void imprimirResultado(float media)
{
    printf("\nMédia calculada: %.2f\n", media);
    if (media >= 6)
    {
        printf("Situação: Aprovado!\n");
    }
    else
    {
        printf("Situação: Reprovado\n");
    }
}
#include <stdio.h>
#include <stdlib.h> // Para malloc()

// Protótipos
void cabecalho();
float calcularMedia(float notas[], int quantidade);
void imprimirResultado(float media);

int main() {
    int quant;

    cabecalho();
    printf("Qual é a quantidade de notas? \n");
    scanf("%d", &quant);

    if (quant <= 0) {
        printf("Erro: A quantidade de notas deve ser maior que zero.\n");
        return 1; // Sai do programa com erro
    }

    // Alocação dinâmica para armazenar as notas
    float *notas = (float *)malloc(quant * sizeof(float));
    if (notas == NULL) {
        printf("Erro de alocação de memória!\n");
        return 1; // Sai do programa com erro
    }

    for (int i = 0; i < quant; ++i) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    // Chamando função que chama outra função
    imprimirResultado(calcularMedia(notas, quant));

    free(notas); // Liberando memória alocada
    return 0;
}

void cabecalho() {
    printf("=== CALCULADORA DE MÉDIAS ===\n\n");
}

float calcularMedia(float notas[], int quantidade) {
    float somasdasmedias = 0; // Inicialização correta
    for (int i = 0; i < quantidade; ++i) {
        somasdasmedias += notas[i];
    }
    
    return somasdasmedias / quantidade;
}

void imprimirResultado(float media) {
    printf("\nMédia calculada: %.2f\n", media);
    if (media >= 7) {
        printf("Situação: Aprovado!\n");
    } else {
        printf("Situação: Reprovado\n");
    }
}

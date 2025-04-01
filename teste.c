#include <stdio.h>

// Protótipos
void cabecalho(); // void sem parâmetros
float calcularMedia(float n1, float n2); // com retorno
void imprimirResultado(float media); // void com parâmetro

int main() {
    float nota1, nota2;
    
    cabecalho();
    
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    
    // Chamando função que chama outra função
    imprimirResultado(calcularMedia(nota1, nota2));
    
    return 0;
}

void cabecalho() {
    printf("=== CALCULADORA DE MÉDIAS ===\n\n");
}

float calcularMedia(float a, float b) {
    return (a + b) / 2;
}

void imprimirResultado(float media) {
    printf("\nMédia calculada: %.2f\n", media);
    if(media >= 6) {
        printf("Situação: Aprovado!\n");
    } else {
        printf("Situação: Reprovado\n");
    }
}
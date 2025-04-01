#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[50];
    int idade;
    float altura;
} Pessoa;

typedef struct
{
    char nome[50];
    char marcar[50];
    float valor;
} Carro;
#define TAM 5
int main()
{
    Pessoa p[TAM], m[TAM], f[TAM] = {0};
    Carro carro1, carro2;

    p[0].altura = 1.60;
    p[0].idade = 50;
    p[1].idade = 55;
    p[2].idade = 45;
    p[3].idade = 78;
    p[4].idade = 78;
    // scanf("%s", p[4].nome );
    strcpy(p[4].nome, "Carlos");
    for (int i = 0; i < TAM; i++)
    {
        printf("idade : %d \n ", p[i].idade);
    }
    printf("%s", p[4].nome);

    return 0;
}
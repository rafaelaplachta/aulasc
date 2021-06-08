#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main(void)
{
    printf("Ola! Eu sou Radael, sistema que vive dentro desta maquina.\nQuero conhecer voce e, para isto, preciso que voce responda algumas perguntas que vou fazer.");

    char nome[99];
    printf("Para comecar, digite seu nome ou um apelido.\n\r");
    gets(nome);

    int idade;
    printf("Quantos anos voce tem?\n\r");
    scanf("%d", &idade);

    if (idade >= 65)
    {
        printf("Eh uma pessoa idosa\n");
    }
    else if (idade >= 18)
    {
        printf("Eh uma pessoa adulta\n");
    }
    else if (idade >= 11)
    {
        printf("Eh adolescente \n");
    }
    else
    {
        printf("Ainda eh crianca\n");
    }

    char cidade[99];
    printf("Em qual cidade voce mora?\n");
    gets(cidade);

    system("pause");
    return (0);
}
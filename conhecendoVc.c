#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main(void)
{
    printf("Ola! Eu sou Radael, sistema que vive dentro desta maquina.\nQuero conhecer voce e, para isto, preciso que voce responda algumas perguntas que vou fazer.");

    char nome[40];
    printf("Para comecar, digite seu nome ou um apelido.\n\r");
    gets(nome);
    printf("Oi %s !", nome);

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
    int cidade;
    char option;
    printf("Voce mora em Curitiba? Responda sim ou nao \n\r");
    gets(option);

    if (option == "sim")
    {
        cidade = 1;
    }
    else if (option == "nao")
    {
        cidade = 0;
    }
    printf("Hum: %s\n", cidade == 1 ? "Legal saber que voce mora em Curitiba tambem!" : " Adorararia conhecer sua cidade!");

    return 0;
}
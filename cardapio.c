#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

const int prato_1 = 161;
const int prato_2 = 108;
const int prato_3 = 98;
const int prato_4 = 94;
const int prato_5 = 86;
const int prato_6 = 131;

void cardapio();
void outroPrato();

//cardápio.

void cardapio()
{
    int opcum;

    printf("Ola! Digite o numero referente ao prato que deseja saborear:\n");
    printf("1: Camarao Internacional R$ %i reais\n",
           prato_1);

    printf("2: Peixe Pizzaiolo R$ %i reais\n",
           prato_2);

    printf("3: Carne de Sol do Sertao R$ %i reais\n",
           prato_3);
    printf("4: Camarao Buzios R$ %i reais\n",
           prato_4);
    printf("5: Camarao Praia de Olinda R$ %i reais\n",
           prato_5);
    printf("6: Tilapia Brasil R$ %i reais\n",
           prato_6);

    scanf("%i", &opcum);

    if (opcum == 1)
    {
        printf("Ok, voce escolheu o prato Camarao Internacional. O valor do prato e R$ %i reais.\n", prato_1);
        fflush(stdin);
        return outroPrato();
    }
    else if (opcum == 2)
    {
        printf("Ok, voce escolheu o prato Peixe Pizzaiolo. O valor do prato e R$ %i reais.\n", prato_2);
        fflush(stdin);
        return outroPrato();
    }
    else
    {
        printf("opcao invalida, cardapio em construcao.\n");
        fflush(stdin);
        return outroPrato();
    }
}

//fumcao para escolha de outro prato.
void outroPrato()
{
    printf("Deseja escolher outro prato?\n");
}

int main(void)
{
    cardapio();
    outroPrato();

    system("pause");
    return 0;
}
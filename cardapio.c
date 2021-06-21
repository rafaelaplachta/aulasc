#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void cardapio(void);
void confirme(void);
void conta(void);

//início do cardapio.

void cardapio(void)
{
    int opc;
    const int prato_1 = 161;
    const int prato_2 = 108;
    const int prato_3 = 98;
    const int prato_4 = 94;
    const int prato_5 = 93;
    const int prato_6 = 131;

    printf("Ola! Digite o numero referente ao prato que deseja saborear:\n"
           "1: Camarao Internacional R$ %i reais\n",
           prato_1

           "2: Peixe Pizzaiolo R$ %i reais\n",
           prato_2

           "3: Carne de Sol do Sertao R$ %i reais\n",
           prato_3
           "4: Camarao Buzios R$ %i reais\n",
           prato_4
           "5: Camarao Praia de Olinda R$ %i reais\n",
           prato_5
           "6: Tilapia Brasil R$ %i reais\n",
           prato_6);

    scanf("%d", &opc);

    if (opc == 1)
    {
        printf("Ok, voce escolheu o prato Camarao Internacional. O valor do prato e R$ %i reais.\n", prato_1);
    }
    else if (opc == 2)
    {
        printf("Ok, voce escolheu o prato Peixe Pizzaiolo. O valor do prato e R$ %i reais.\n", prato_2);
    }
    else
    {
        printf("opcao invalida, cardapio em construcao.\n");
    }

    int main(void)
    {

        system("pause");

        return 0;
    }

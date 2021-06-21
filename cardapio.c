#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void)
{

    return0;
}

void cardapio(void);
void confirme(void);
void conta(void);

//início do cardapio.

void cardapio(void)
{
    int opc;
    int valorDoPrato;

    printf("Ola! Digite o numero referente ao prato que deseja saborear:\n"
           "1: Camarao Internacional R$161 reais \n\r"
           "2: Peixe Pizzaiolo R$108 reais\n\r"
           "3: Carne de Sol do Sertao R$98 reais\n\r"
           "4: Camarao Buzios R$94 reais\n\r"
           "5: Camarao Praia de Olinda R$94 reais\n\r"
           "6: Tilapia Brasil R$131 reais\n\r");

    scanf("%d", &opc);

    if (opc == 1)
    {
        valorDoPrato = 161;
        printf("Ok, voce escolheu o prato Camarao Internacional. O valor do prato e R$ %d reais.\n\r", valorDoPrato);
    }
    else if (opc == 2)
    {
        valorDoPrato = 108;
        printf("Ok, voce escolheu o prato Peixe Pizzaiolo. O valor do prato e R$ %d reais.\n\r", valorDoPrato);
    }
    else
    {
        printf("invalido, cardapio em construcao.\n\r");
    }

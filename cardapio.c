#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void)
{
    int opc;
    float valorDoPrato;

    printf("Cardapio Interativo\n\r"
           "Ola! Escolha seu prato e digite o numero referente:\n\r"
           "1: Camarao Internacional..........R$161,00\n\r"
           "2: Peixe Pizzaiolo..........R$108,00\n\r"
           "3: Carne de Sol do Sertao..........98R$98,00\n\r"
           "4: Camarao Buzios..........R$94,90\n\r"
           "5: Camarao Praia de Olinda........R$94,90\n\r"
           "6: Frango a Parmegiana..........R$94,90\n\r"
           "7: Tilapia Brasil..........R$131,00\n\r"
           "8: Camarao Mediterraneo..........R$141,00\n\r");
    scanf("%d", &opc);

    switch (opc)
    {
    case 1:
        printf("Ok, voce escolheu o prato Camarao Internacional.\n\r");
        break;

    case 2:
        printf("Ok, voce escolheu o prato Peixe Pizzaiolo.\n\r");
        break;

    default:
        printf("Escolha incorreta.");
    }

    system("pause");
    return 0;
}
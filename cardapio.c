#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void)
{
    int opc;
    float valorDoPrato;

    printf("Cardapio Interativo\n\r"
           "Ola! Escolha seu prato e digite o numero referente:\n\r"
           "1: Camarao Internacional..........R$161.18\n\r"
           "2: Peixe Pizzaiolo..........R$108.11\n\r"
           "3: Carne de Sol do Sertao..........98R$98.39\n\r"
           "4: Camarao Buzios..........R$94,92\n\r"
           "5: Camarao Praia de Olinda........R$94.08\n\r"
           "6: Frango a Parmegiana..........R$94.32\n\r"
           "7: Tilapia Brasil..........R$131.27\n\r"
           "8: Agua Mineral de Ouro..........R$24.17\n\r");
    scanf("%d", &opc);
    scanf("%f", &valorDoPrato);

    switch (opc)
    {
    case 1:
        printf("Ok, voce escolheu o prato Camarao Internacional.\n\r");
        break;

    case 2:
        printf("Ok, voce escolheu o prato Peixe Pizzaiolo.\n\r");
        break;

    case 3:
        printf("Ok, voce escolheu o prato Carne de Sol do Sertao.\n\r");
        break;

    case 4:
        printf("Ok, voce escolheu o prato Camarao Buzios.\n\r");
        break;

    case 5:
        printf("Ok, voce escolheu o prato Camarao Praia de Olinda.\n\r");
        break;

    case 6:
        printf("Ok, voce escolheu o prato Frango a Parmegiana.\n\r");
        break;

    case 7:
        printf("Ok, voce escolheu o prato Tilapia Brasil.\n\r");
        break;

    case 8:
        printf("Ok, voce escolheu Agua Mineral de Ouro.\n\r");
        break;

    default:
        printf("Escolha incorreta.");
    }

    system("pause");
    return 0;
}
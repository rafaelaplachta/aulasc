#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void)
{
    int opc;
    int valorDoPrato;

    printf("Cardapio Interativo\n\r"
           "Ola! Escolha seu prato e digite o numero referente:\n\r"
           "1: Camarao Internacional R$161 reais \n\r"
           "2: Peixe Pizzaiolo R$108 reais\n\r"
           "3: Carne de Sol do Sertao R$98 reais\n\r"
           "4: Camarao Buzios R$94 reais\n\r"
           "5: Camarao Praia de Olinda R$94 reais\n\r"
           "6: Frango a Parmegiana R$94 reais\n\r"
           "7: Tilapia Brasil R$131 reais\n\r"
           "8: Agua Mineral de Ouro R$24 reais\n\r");
    scanf("%d", &opc);

    if (opc == 1)
    {
        valorDoPrato = 161;
        printf("Ok, voce escolheu o prato Camarao Internacional. O valor do prato e R$%dreais.\n\r", valorDoPrato);
    }
    else if (opc == 2)
    {
        valorDoPrato = 108;
        printf("Ok, voce escolheu o prato Peixe Pizzaiolo. O valor do prato e R$%d reais.\n\r", valorDoPrato);
    }
    else
    {
        printf("invalido, cardapio em construcao.\n\r");
    }

    system("pause");
    return 0;
}
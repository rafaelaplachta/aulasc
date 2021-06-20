#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(void)
{

    printf("Cardapio Interativo\n\r");

    // Início do cardápio.

    void cardapio()
    {
        int opc;
        int valorDoPrato;
        int valorAPagar;

        printf("Ola! Digite o numero referente ao prato que deseja saborear:\n\r"
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
            confirme();
        }
        else if (opc == 2)
        {
            valorDoPrato = 108;
            printf("Ok, voce escolheu o prato Peixe Pizzaiolo. O valor do prato e R$%d reais.\n\r", valorDoPrato);
            confirme();
        }
        else
        {
            printf("invalido, cardapio em construcao.\n\r");
            confirme();
        }

        void confirme()
        {
            char opc;

            printf("Deseja pedir outro prato?\n\r
                   "Digite "s
                   " para sim e " n " para opcao nao.\n\r");

            scanf("%s", &opc);

            switch (opc)
            {
            case 's':
                return cardapio();
                break;
            case 'n':
                return conta();
                break;
            default:
                printf("Opcao invalida!\n\r");
                return confirme();
                break;
            }

            system("pause");
            return 0;
        }
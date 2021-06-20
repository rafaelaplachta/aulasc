#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int confirme()
{
    char opc;

    printf("Deseja pedir outro prato?   Digite s ou n:\n\r");

    scanf("%s", &opc);

    switch (opc)
    {
    case 's':
        return (cardapio);
        break;
    case 'n':
        return (cardapio);
        break;
    default:
        printf("Opcao invalida!\n\r");
        return (cardapio);
        break;
    }
}

// Início do cardápio.

int cardapio()
{
    int opc;
    int valorDoPrato;

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
        printf("Ok, voce escolheu o prato Camarao Internacional. O valor do prato e R$ %d reais.\n\r", valorDoPrato);
        return confirme();
    }
    else if (opc == 2)
    {
        valorDoPrato = 108;
        printf("Ok, voce escolheu o prato Peixe Pizzaiolo. O valor do prato e R$ %d reais.\n\r", valorDoPrato);
        return confirme();
    }
    else
    {
        printf("invalido, cardapio em construcao.\n\r");
        return confirme();
    }
}

char conta()
{

    char cliente;

    printf("Digite seu nome:\n\r");
    scanf("%s", &cliente);

    printf("%s, Agradecemos a preferencia!\n", cliente);
}

int main(void)
{

    cardapio();
    printf("Cardapio Interativo\n\r");

    system("pause");
    return 0;
}
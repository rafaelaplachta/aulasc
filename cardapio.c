#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void confirme(void);
void cardapio(void);
void conta(void);

// Início do cardápio.

void cardapio(void)
{
    int opc;

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
}

//início da função "confirme".

void confirme(void)
{
    char opc;

    printf("Deseja pedir outro prato?   Digite s ou n:\n\r");

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
        return cardapio();
        break;
    }
}

//início da função "conta".
void conta(void)
{
    char *cliente;

    printf("Digite seu nome:\n\r");
    scanf("%s", &cliente);

    printf("%s, Agradecemos a preferencia!\n", cliente);
}

int main(void)
{
    printf("Cardapio Interativo\n\r");

    return 0;
}

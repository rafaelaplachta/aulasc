#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

const int PRATO1 = 161;
const int PRATO2 = 108;
const int PRATO3 = 98;
const int PRATO4 = 94;
const int PRATO5 = 86;
const int PRATO6 = 131;

//declarando as funções do programa.

void inicio();
void cardapio();
void outroPrato();
void opc();
void fim();

int main(void)
{
    inicio();

    return 0;
    system("pause");
}

//Cabeçalho do programa.
void inicio()
{
    printf("\t\t\tSeja bem-vindo ao cardapio interativo!\n");
    return cardapio();
}

//cardápio.

void cardapio()
{
    int opc_1;

    printf("Digite o numero referente ao prato que deseja saborear e tecle enter:\n");
    printf("1: Camarao Internacional R$ %i reais\n",
           PRATO1);
    printf("2: Peixe Pizzaiolo R$ %i reais\n",
           PRATO2);
    printf("3: Carne de Sol do Sertao R$ %i reais\n",
           PRATO3);
    printf("4: Camarao Buzios R$ %i reais\n",
           PRATO4);
    printf("5: Camarao Praia de Olinda R$ %i reais\n",
           PRATO5);
    printf("6: Tilapia Brasil R$ %i reais\n",
           PRATO6);

    fflush(stdin);
    scanf("%i", &opc_1);

    if (opc_1 == 1)
    {
        printf("Ok, voce escolheu o prato Camarao Internacional. O valor do prato e R$ %i reais.\n", PRATO1);
        return outroPrato();
    }
    else if (opc_1 == 2)
    {
        printf("Ok, voce escolheu o prato Peixe Pizzaiolo. O valor do prato e R$ %i reais.\n", PRATO2);
        return outroPrato();
    }
    else
    {
        printf("opcao invalida, cardapio em construcao.\n");
        return outroPrato();
    }
}

//fumção para escolha de outro prato.
void outroPrato()
{
    printf("Deseja escolher outro prato?\n");
    return opc();
}

//Função opção.

void opc()
{
    int opc;

    printf("Digite 1 para sim ou 2 para opcao nao e tecle enter:\n");

    fflush(stdin);
    scanf("%d", &opc);

    if (opc == 1)
    {
        printf("Legal, vamos escolher outro prato.\n");
        return cardapio();
    }
    else
        printf("Ok, vamos fechar sua conta.\n");
    return fim();
}

//Rodapé do programa.

void fim()
{
    printf("Agradecemos a preferencia. Volte sempre!");
}

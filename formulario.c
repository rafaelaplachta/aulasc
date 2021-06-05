#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main(void)
{
  char nome[99];
   char dataNasc[11];
  char pcd[30];
  char cidade[40];
  char uf[2];
  char opcao[2];
  int sexo;

  printf("Formulario de cadastro.\n\r");

  printf("Digite seu nome completo:\n\r");
  gets(nome);

  printf("Digite sua data de nascimento dd/mm/aaaa:\n\r");
  gets(dataNasc);

  printf("Possui algum tipo de deficiencia, se sim, informe qual:\n\r");
  gets(pcd);

  printf("Digite a cidade onde mora:\n\r");
  gets(cidade);

  printf("Digite a sigla do Estado, apenas duas letras:\n\r");
  gets(uf);

  printf("Informe seu sexo: m se for masculino e f para feminino\n\r");
  gets(opcao);

  if (opcao == "m")
  {
    sexo =1;
  }

  else if (opcao =="f"); 
  {
    sexo =0;
  }

      printf("Aqui estao seus dados:\n\r");

          printf("Seu nome completo: %s\n", nome);
              printf("Data de nascimento: %s\n", dataNasc);
                  printf("Deficiencia: %s\n", pcd);
                      printf("Cidade: %s\n", cidade);
    printf("Estado: %s\n", uf);
        printf("Sexo: %s\n", sexo == 1 ? " masculino" : " feminino");

        return 0;
        system("pause");

}
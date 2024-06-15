#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CARACTER 25
#define NOMES 10
#define IDADE 10
int main()
{
    char nome[NOMES][CARACTER]= {};
    int idade[IDADE]= {};
    int i,j,num;
    char acao[1];

    while(acao[0]!='S')
    {
        fflush(stdin);
        printf("Escolha uma opcao:\nP - Para ver o vetor atualmente \nN - Para mudar a palavra do vetor\nI - Para mudar o valor da idade \nS - Para sair do programa\n");
        scanf("%c",&acao);
        acao[0]=toupper(acao[0]);
        switch(acao[0])
        {
        case 'P':
            system("cls");
            for(i=0; i<NOMES; i++)
            {
                printf("Codigo: %d - Nome: ",i+1);
                for(j=0; j<CARACTER; j++)
                {
                    if(nome[i][j]=='\0' || nome[i][j]=='\n')
                    {
                        break;
                    }
                    else
                    {
                        printf(" [%c] ",nome[i][j]);
                    }
                }
                printf(" idade [%d]",idade[i]);
                printf("\n");
            }

            break;
        case 'N':
            printf("Digite o codigo do valor que deseja alterar\n");
            scanf(" %d", &i);

            while(i>NOMES || i<=0)
            {
                printf("Codigo Invalido\nDigite o codigo do valor que deseja alterar\n");
                scanf(" %d", &i);
            }
            fflush(stdin);
            printf("Digite um novo nome para o codigo %d\n",i);
            i--;
            fgets(nome[i], CARACTER, stdin);
            system("cls");
            break;

        case 'S':

            break;


        case 'I':
            printf("Digite o codigo do valor que deseja alterar\n");
            scanf(" %d", &i);
            while(i>IDADE || i<=0)
            {
                printf("Codigo Invalido\nDigite o codigo do valor que deseja alterar\n");
                scanf(" %d", &i);
            }

            printf("Digite uma novo idade para o codigo %d\n",i);
            i--;
            scanf(" %d", &idade[i]);
            system("cls");
            break;

        default:
            printf("Voce digitou um valor invalido!\n");
            break;
        }

    }

    return 0;
}

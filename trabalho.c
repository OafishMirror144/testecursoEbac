#include <stdio.h>//entrada e saida
#include <locale.h>//biblioteca de local
#include <stdlib.h>//biblioteca de memoria , utilitarios de preogramas...
#include <string.h>//string
//bibliotecas utilizadas para manter a funcionalidade do sistema

int registro()
{
    //conjunto de variaveis
    char arquivo[40];
    char cpf[40];
    char nome[40];
    char sobrenome[40];
    char cargo[40];

    setlocale(LC_ALL, "portuguese");//setlocale(LC_ALL," "); é utilizado para definir o local de linguagem

    printf("\t\t**Criar Usuário**\n\n\n");
    printf("digite o CPF:");
    scanf("%s", cpf);
    strcpy(arquivo, cpf);

    FILE *file;//criar arquivo
    file=fopen(arquivo,"w");//criar o arquivo//"W"= write
    fprintf(file,cpf);//vai abrir o file=arquivo e digitar o char cpf
    fclose(file);//fechar arquivo

    file = fopen(arquivo, "a");//"a" A tualizar o file
    fclose(file);//fecha o arquivo

    printf("Digite o Nome:");
    scanf("%s",nome);//string de trazer o char "nome"

    file = fopen(arquivo,"a");//vai atualizar o aqruivo
    fprintf(file,",");//vai colocar uma virgola
    fprintf(file,nome);//vai salvar o nome digitado
    fclose(file);//fecha o aqruivo

    printf("digite o sobrenome:");
    scanf("%s",sobrenome);

    file=fopen(arquivo,"a"),
    fprintf(file,",");
    fprintf(file,sobrenome);
    fclose(file);

    printf("digite seu cargo:");
    scanf("%s",cargo);

    file=fopen(arquivo,"a");
    fprintf(file,",");
    fprintf(file,cargo);
    fprintf(file,".");
    fclose(file);


    system("pause");//pausa o prosseso para nao rolar direto
}
int consulta()
{
    setlocale(LC_ALL, "portuguese");

    char cpf[40];
    char conteudo[300];


    printf("##Gegistro de Usuario##\n\n");
    printf("\tCPF do Usuario:\n");
    scanf("%s",cpf);
    FILE *file;
    file = fopen(cpf,"r");

    if(file==NULL)
    {
        printf("Usuario não existente.\n");
    }
    while(fgets(conteudo,300,file)!= NULL)
    {
        printf("informações encontradas\n");
        printf("%s",conteudo);
        printf("\n\n");
        system("pause");
    }

}
int apagar()
{
    setlocale(LC_ALL,"portuguese");

    char cpf[40];

    printf("##Apagar Usuario##\n\n");

    printf("\tCPF do Usuario:\n\t");
    scanf("%s",cpf);

    remove(cpf);

    FILE *file;
    file =fopen(cpf,"r");

    if(file ==NULL)
    {

        printf("Usuário nao encontrado\n\n");

        system("pause");

    }

     }

int main()
{

    int opcao=0;
    int laco=1;

    for(laco=1;laco=1;)
    {
     system("cls");

     setlocale(LC_ALL, "portuguese");



     printf("####Cartório de Testes####\n\n\n");
     printf("\t\t1- Cadrastar Usuario\n\n");
     printf("\t\t2- Consultar Usuario\n\n");
     printf("\t\t3- Apagar Usuario\n\n");
     printf("\t\t4- Sair do programa\n\n");
     printf("opções:");

     scanf("%d", &opcao);
     system("cls");

     switch(opcao)
     {
         case 1:
             registro();
             break;

         case 2:
             consulta();
             break;

         case 3:
            apagar();
            break;
         case 4:
            printf("Obrigado por utilizar o programa");
            return 0;
            break;

        default:
            printf("Opção não existe\n\n");
            system("pause");
            break;
       }



     }
//%s = salvar na string

}

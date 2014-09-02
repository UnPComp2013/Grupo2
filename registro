#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cadastro {
    char user[20];
    char pass[20];
    char login[20];
    char senha[20];
} cadastro;

char *cadastro_login()
{
    struct cadastro usuario[1];

    system("cls");
    printf("\n\tCadastro");
    puts("\n\n\tDigite o login: ");
    printf("\t");
    scanf(" %s",usuario[0].user);
    return (usuario[0].user);
}

char *cadastro_senha()
{
    struct cadastro password[1];

    puts("\tDigite a senha: ");
    printf("\t");
    scanf(" %s",password[0].pass);
    system("cls");
    return (password[0].pass);
}

int main(void)
{
    int a,b,c,d,nc;
    int logado;
    int op;
    char login[1][20], senha[1][20];
    struct cadastro logando[3];

    printf("1 - Cadastro\n");
    printf("2 - Logar\n");
    printf("3 - Fechar\n");
    scanf("%d", &op);
    if (op == 1) {
        printf("\nQuantos cadastros deseja fazer? \n");
        scanf("%d",&nc);
        for (a=0;a<nc;a++){
            memcpy(logando[a].user, cadastro_login(), 50);
            memcpy(logando[a].pass, cadastro_senha(), 50);
        }
    }
    else if (op == 3) exit(0);
    system("cls");
    printf("\n\tLogon\n");
    printf("\n\tLogin: ");
    scanf(" %s",login[0]);
    printf("\n\tSenha: ");
    scanf(" %s",senha[0]);


    for (c=0;c<3;c++)
    {
        if ((strcmp(login[0],logando[c].user)!=0) || (strcmp(senha[0],logando[c].pass)!=0))
        {
            logado = 1; //login e/ou senha incorretos
        }
        else if(strcmp(login[0],logando[c].user)==0)
        {
            if (strcmp(senha[0],logando[c].pass)==0)
            {
                logado = 2; //logado com sucesso
                break;
            }

        }
    }

    if (logado==1)
    {
        printf("\nLogin e/ou senha incorretos(s)\n");
    }
    else if (logado==2)
    {
        printf("\nLogado com sucesso!\nBem-vindo(a) %s\n",login[0]);
    }

    return 0;
}

/*Sistema de Login e Senha

Desenvolvido por: Gabriel Lima

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.c>
#include <string.h>
#include <windows.h>

void pausaSistema(){
    system("pause");

}

void limpaTela(){
    system("CLS");

}

void desenhaBorda(){
    printf("------------------------------------------------------");

}

void pulaLinha(){
    printf("\n");

}

int main(){
    inicio:
    setlocale(LC_ALL, "");

    //OPÇÃO - LOGIN/CADASTRO
    int opcao;

    //LOGIN/CADASTRO/CONF. SENHA
    char login1[255], login2[255];
    char senha1[255], senha2[255], senhaconf[255];

    //CONTADORES
    int i = 0, j = 0, k = 0;

    //MEM.SET LOGIN/CADASTRO/CONF.SENHA
    memset(login1, 0x00, sizeof(login1));
    memset(login2, 0x00, sizeof(login2));
    memset(senha1, 0x00, sizeof(senha1));
    memset(senha2, 0x00, sizeof(senha2));
    memset(senhaconf, 0x00, sizeof(senhaconf));

    //APRESENTAÇÃO/SISTEMA
    menuinicial:
    textcolor(WHITE);
    desenhaBorda();
    pulaLinha();
    textcolor(GREEN);
    printf("\t >>> NOME DO SEU SISTEMA AQUI! <<<");
    textcolor(WHITE);
    pulaLinha();
    desenhaBorda();
    pulaLinha();

    //MENU - LOGIN/CADASTRO
    printf("1 - LOGIN");
    printf("\t\t|\t\t");
    printf("2 - CADASTRO");
    pulaLinha();
    desenhaBorda();
    pulaLinha();
    printf("OPÇÃO DESEJADA Nº: ");
    textcolor(GREEN);
    scanf("%d", &opcao);
    textcolor(WHITE);
    limpaTela();

    switch(opcao){
    case 1:
        //APRESENTAÇÃO/SISTEMA
        desenhaBorda();
        pulaLinha();
        textcolor(GREEN);
        printf("\t >>> NOME DO SEU SISTEMA AQUI! <<<");
        textcolor(WHITE);
        pulaLinha();
        desenhaBorda();
        pulaLinha();

        //LOGIN/SENHA
        printf("\t\t       LOGIN");
        pulaLinha();
        desenhaBorda();
        pulaLinha();
        printf("NOME DE USUÁRIO: ");
        textcolor(GREEN);
        scanf("%s", &login1);
        textcolor(WHITE);
        printf("SENHA: ");
        fflush(stdin);

        //MÁSCARA DE SENHA LOGIN
        do{
        textcolor(GREEN);
        senha1[i] = getch();

        if(senha1[i] == 0x08 && i > 0){
            printf("\b \b");
            senha1[i] = 0x00;
            i--;

        }

        else if(senha1[i] == 13){
            senha1[i] = 0x00;
            break;

        }

        else if(senha1[i] != 0x08){
            putchar('*');
            i++;

        }

        }while(i < 255);

        limpaTela();

        //APRESENTAÇÃO/SISTEMA
        textcolor(WHITE);
        desenhaBorda();
        pulaLinha();
        textcolor(GREEN);
        printf("\t >>> NOME DO SEU SISTEMA AQUI! <<<");
        textcolor(WHITE);
        pulaLinha();
        desenhaBorda();
        pulaLinha();

        //MENSAGEM DE LOGIN
        if(strcmp(login1, login2) == 0 && strcmp(senha1, senha2) == 0){
            textcolor(WHITE);
            printf("LOGIN REALIZADO COM SUCESSO!");
            pulaLinha();
            desenhaBorda();
            pulaLinha();
            pausaSistema();
            limpaTela();

        }

        else{
            textcolor(WHITE);
            printf("NOME DE USUÁRIO E/OU SENHA INVÁLIDOS!");
            pulaLinha();
            desenhaBorda();
            pulaLinha();
            pausaSistema();
            limpaTela();
        }

        break;

    case 2:
        //APRESENTAÇÃO/SISTEMA
        desenhaBorda();
        pulaLinha();
        textcolor(GREEN);
        printf("\t >>> NOME DO SEU SISTEMA AQUI! <<<");
        textcolor(WHITE);
        pulaLinha();
        desenhaBorda();
        pulaLinha();

        //CADASTRO
        printf("\t\t     CADASTRO");
        pulaLinha();
        desenhaBorda();
        pulaLinha();
        printf("NOME DE USUÁRIO: ");
        textcolor(GREEN);
        scanf("%s", &login2);
        textcolor(WHITE);
        printf("SENHA: ");
        fflush(stdin);

        //MÁSCARA DE SENHA CADASTRO
        do{
        textcolor(GREEN);
        senha2[j] = getch();

        if(senha2[j] == 0x08 && j > 0){
            printf("\b \b");
            senha2[j] = 0x00;
            j--;

        }

        else if(senha2[j] == 13){
            senha2[j] = 0x00;
            break;

        }

        else if(senha2[j] != 0x08){
            putchar('*');
            j++;

        }

        }while(j < 255);

        pulaLinha();
        textcolor(WHITE);
        printf("CONFIRME A SENHA: ");
        fflush(stdin);

        //MÁSCARA DE SENHA CADASTRO/CONFIRMAÇÃO
        do{
        textcolor(GREEN);
        senhaconf[k] = getch();

        if(senhaconf[k] == 0x08 && k > 0){
            printf("\b \b");
            senhaconf[k] = 0x00;
            k--;

        }

        else if(senhaconf[k] == 13){
            senhaconf[k] = 0x00;
            break;

        }

        else if(senhaconf[k] != 0x08){
            putchar('*');
            k++;

        }

        }while(k < 255);

        limpaTela();

        //APRESENTAÇÃO/SISTEMA
        textcolor(WHITE);
        desenhaBorda();
        pulaLinha();
        textcolor(GREEN);
        printf("\t >>> NOME DO SEU SISTEMA AQUI! <<<");
        textcolor(WHITE);
        pulaLinha();
        desenhaBorda();
        pulaLinha();

        //MENSAGEM DE CADASTRO
        if(strcmp(senha2, senhaconf) == 0){
            textcolor(WHITE);
            printf("CADASTRO REALIZADO COM SUCESSO!");
            pulaLinha();
            desenhaBorda();
            pulaLinha();
            pausaSistema();
            limpaTela();
            goto menuinicial;

        }

        else{
            textcolor(WHITE);
            printf("AS SENHAS NÃO COINCIDEM, TENTE NOVAMENTE!");
            pulaLinha();
            desenhaBorda();
            pulaLinha();
            pausaSistema();
            limpaTela();
            goto inicio;

        }

        break;

    }

}

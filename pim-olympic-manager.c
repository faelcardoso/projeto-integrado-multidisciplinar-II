/*

PIM Segundo semestre de Análise e desenvolvimento de sistemas UNIP período noturno.
Grupo:
Braian santos
João Henrique
Natanael Araújo
Rafael Cardoso
Victor Fernando
Victor H. Laveso

Tema: Software de auxílio no gerenciamento dos eventos dos Jogos Olímpicos em Paris de 2024.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ncurses.h>
#include <unistd.h>

/* Declaração das Funções */

void vFecharPrograma(void);
void vMenuPrincipal(void);
void vFuncionalidadeCadastro(void);
void vFuncionalidadeConsultaCadastros(void);
void vFuncionalidadeCalendarioOlimpico(void);
void vFuncionalidadeQuadroMedalhas(void);
int getchar(void);


/* Declaração das funções */

int iEscolhaFuncionalidade;

int main (void) {

    printf("\vSeja bem-vindo(a) ao Olympic Manager!\n\v");
    printf("Como usar o programa?\n\vA navegação pelo sistema é feita através das teclas do seu teclado. Digite o \nnúmero correspondente a funcionalidade desejada e em seguida \npressione ENTER para confirmar a Escolha!\n\v");
    puts("Press enter to continue ... ");
    getchar();
    vMenuPrincipal();

    return 0;
}

/* 0 - Menu inicial/Principal */

void vMenuPrincipal (void) {

    system("clear");

    printf("\vEste é o menu principal!\n\vEscolha a funcionalidade desejada digitando o número correspondente à ela em seguida pressione ENTER:\n\v");

    printf("Menu principal\n\v");
    printf("0 - Fechar o programa\n\v");
    printf("1 - Realizar Cadastros\n\v"); // iFuncionalidadeCadastro
    printf("2 - Consulta de Cadastros Realizados\n\v"); // iFuncionalidadeConsultaCadastros
    printf("3 - Calendário Olímpico\n\v"); // iFuncionalidadeCalendarioOlimpico
    printf("4 - Quadro de medalhas\n\v"); // iFuncionalidadeQuadroMedalhas

    printf("Digite o número da funcionalidade desejada: ");
    scanf("%d", &iEscolhaFuncionalidade);

    switch(iEscolhaFuncionalidade) {

        case 0:
            vFecharPrograma();
        break;

        case 1:
            vFuncionalidadeCadastro();
        break;

        case 2:
            vFuncionalidadeConsultaCadastros();
        break;

        case 3:
            vFuncionalidadeCalendarioOlimpico();
        break;

        case 4:
            vFuncionalidadeQuadroMedalhas();
        break;

        default:
            printf("Digite um valor número entre 0 e 9");
    }
}

/* 0 - Menu inicial/Principal */

/* 1 - Funcionalidades de Cadastros */

void vFuncionalidadeCadastro (void) {

    system("clear");

    printf("\vFuncionalidades de Cadastro:\n\v");

    printf("1 - Cadastro de Alojamentos\n\v");
    printf("2 - Cadastro de Atletas\n\v");
    printf("3 - Cadastro de Equipamentos necessários\n\v");
    printf("4 - Cadastro de Esportes\n\v");
    printf("5 - Cadastro de Funcionários\n\v");
    printf("6 - Cadastro de Locais de treino\n\v");
    printf("7 - Cadastro de Países (Delegações)\n\v");
    printf("8 - Cadastro de Sedes de Eventos\n\v");
    printf("9 - Cadastro de Voluntários\n\v");

    printf("Digite o número da funcionalidade desejada:");


    return;
}

/* 1 - Funcionalidades de Cadastro*/

/* 2 - Funcionalidades de consulta de cadastros */

void vFuncionalidadeConsultaCadastros(void) {

    system("clear");

    printf("\vConsulta de cadastros\v");

    return;
}

/* 2 - Funcionalidades de consulta de cadastros */

/* 3 - Funcionalidades do Calendário Olímpico */

void vFuncionalidadeCalendarioOlimpico (void) {

    system("clear");

    printf("\vCalendário Olímpico\v");

    return;
}

/* 3 - Funcionalidades do Calendário Olímpico */

/* 4 - Funcionalidades do Quadro de medalhas */

void vFuncionalidadeQuadroMedalhas (void) {

    system("clear");

    printf("\vQuadro de Medalhas\v");

    return;
}

/* 4 - Funcionalidades do Quadro de medalhas */

/* Fechar o programa */

void vFecharPrograma (void) {

    system("clear");

    printf("Deseja mesmo fechar o programa?\n\v1 - Sim\n\v2 - Não\n\vDigite a sua escolha: ");
    scanf("%d", &iEscolhaFuncionalidade);

    switch (iEscolhaFuncionalidade) {

    case 1:
        exit(0);
    break;

    case 2:
        vMenuPrincipal();
    break;

    default :
        printf("Digite uma opção válida!\n");
        vFecharPrograma();
    break;
    };

    return;
}

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
#include <unistd.h>

#define typeof(var) _Generic( (var),\
char: 0,\
int: 1,\
float: 2,\
char *: 3,\
void *: 4,\
default: 5)

int iEscolhaFuncionalidade = 0; //Variável escolha Funcionalidade

void vVerificacaoEscolha (void) { //Verificar se a variável é um número inteiro

    int tipoVar = typeof(iEscolhaFuncionalidade);

    while (tipoVar != 1) {

        iEscolhaFuncionalidade = 404;

    }

}

// Declaração dos protótipos das Funções

// Funções principais

int iFecharPrograma();
void vMenuPrincipal(void);
void vFuncionalidadeCadastro(void);
void vFuncionalidadeConsultaCadastros(void);
void vFuncionalidadeCalendarioOlimpico(void);
void vFuncionalidadeQuadroMedalhas(void);
int getchar(void);
void clrscr(); //limpa tela
void vVerificacaoEscolha(void); //verificação de digitação na variável de escolha
int iErroDigitacao(); //caso ocorra erro na digitação da variável de escolha

//Funções de cadastro

int iCadastroAlojamento(void);
int iCadastroAtleta(void);
int iCadastroAtletaFeminino(void);
int iCadastroAtletaMasculino(void);
int iCadastroEquipamentoNecessario();
int iCadastroEsportes(void);
int iCadastroCategoria(void);
int iCadastroFuncionarios(void);
int iCadastroLocalTreino(void);
int iCadastroModalidade(void);
int iCadastroPaises(void);
int iCadastroSedeEvento(void);
int iCadastroVoluntarios(void);

//Funcoes Visualizar Cadastros
void vVisualizarAlojamento(void);
void vVisualizarAtletas(void);
void vVisualizarEquipamentoNecessarios(void);
void vVisualizarEsportes(void);
void vVisualizarFuncionarios(void);
void vVisualizarLocaisDeTreino(void);
void vVisualizarPaises(void);
void vVisualizarSedesDeEvento(void);
void vVisualizarVoluntarios(void);

/* Declaração das funções */

int main () {

    clrscr();
    printf("\vSeja bem-vindo(a) ao Olympic Manager!\n\v");
    printf("Como usar o programa?\n\vA navegação pelo sistema é feita através das teclas do seu teclado. Digite o \nnúmero correspondente a funcionalidade desejada e em seguida \npressione ENTER para confirmar a Escolha!\n\v");
    puts("Pressione ENTER para continuar... ");
    getchar();
    printf("\vVocê verá o menu principal agora!\n\vEscolha a funcionalidade desejada digitando o número correspondente à ela em seguida pressione ENTER:\n\v");
    getchar();
    vMenuPrincipal();

    return 0;
 }

/* 0 - Menu inicial/Principal */

void vMenuPrincipal (void) {

    clrscr();

    printf("Menu principal\n\v");
    printf("0 - Fechar o programa\n\v");
    printf("1 - Realizar Cadastros\n\v"); // iFuncionalidadeCadastro
    printf("2 - Consulta de Cadastros Realizados\n\v"); // iFuncionalidadeConsultaCadastros
    printf("3 - Calendário Olímpico\n\v"); // iFuncionalidadeCalendarioOlimpico
    printf("4 - Quadro de medalhas\n\v"); // iFuncionalidadeQuadroMedalhas

    printf("Digite o número da funcionalidade desejada: ");
    scanf("%d", &iEscolhaFuncionalidade);

    vVerificacaoEscolha();

    switch(iEscolhaFuncionalidade) {

        case 0:
            iFecharPrograma();
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

        case 404:
            iErroDigitacao();
        break;

    }

}

/* Erro digitação número */

int iErroDigitacao() {

    main();

    return 0;

}

/* Erro digitação número */

/* Função limpa tela */

void clrscr(){
    #if defined(__linux__) || defined(__unix__) || defined(__Apple__)
        system("clear");
    #endif

    #if defined(_WIN32) || defined(_WIN64)
        system("cls");
    #endif
}

/* Função limpa tela */

/* 0 - Menu inicial/Principal */

/* 1 - Funcionalidades de Cadastros */

void vFuncionalidadeCadastro (void) {

    clrscr();
    printf("Funcionalidades de Cadastro:\n\v");

    printf("0 - Voltar\n\v");
    printf("1 - Cadastro de Alojamentos\n\v");
    printf("2 - Cadastro de Atletas\n\v");
    printf("3 - Cadastro de Equipamentos necessários\n\v");
    printf("4 - Cadastro de Esportes\n\v");
    printf("5 - Cadastro de Funcionários\n\v");
    printf("6 - Cadastro de Locais de treino\n\v");
    printf("7 - Cadastro de Países (Delegações)\n\v");
    printf("8 - Cadastro de Sedes de Eventos\n\v");
    printf("9 - Cadastro de Voluntários\n\v");

    printf("Digite o número da funcionalidade desejada: ");
    scanf("%d", &iEscolhaFuncionalidade);

    switch (iEscolhaFuncionalidade) {

    case 0:
        vMenuPrincipal();
    break;

    case 1:
        iCadastroAlojamento();
    break;

    case 2:
        iCadastroAtleta();
    break;

    case 3:
        iCadastroEquipamentoNecessario();
    break;

    case 4:
        iCadastroEsportes();
    break;

    case 5:
        iCadastroFuncionarios();
    break;

    case 6:
        iCadastroLocalTreino();
    break;

    case 7:
        iCadastroPaises();
    break;

    case 8:
        iCadastroSedeEvento();
    break;

    case 9:
        iCadastroVoluntarios();
    break;

    case 404:
        iErroDigitacao();
    break;
    }

    return;
}

int iCadastroAlojamento (void) {

    int iNumPredioAlojamentoCad;

    clrscr();

    printf("*********IMPORTANTE*********\n");
    printf("Todos os atletas deverão ficar hospedados na Vila Olímpica, afim de evitar\npossíveis complicações com a COVID-19.\n\v");
    printf("Digite o número do prédio do alojamento: ");
        scanf("%d", &iNumPredioAlojamentoCad);
    printf("\n\vO número do prédio do alojamento digitado foi: %d\n\v", iNumPredioAlojamentoCad);

    printf("Digite 1 para continuar: ");
        scanf("%d", &iEscolhaFuncionalidade);
    vVerificacaoEscolha();

    switch (iEscolhaFuncionalidade) {

    case 1:
        vFuncionalidadeCadastro();
    break;

    case 404:
        iErroDigitacao();
    break;

    }
    return 0;
}

int iCadastroEsportes (void) {
    return 0;
}

int iCadastroCategoria (void) {
    return 0;
}

int iCadastroModalidade (void) {
    return 0;
}

int iCadastroPaises (void) {
    return 0;
}

int iCadastroAtleta (void) {

    int iAtletaMasculino;
    int iAtletaFeminino;

    iAtletaMasculino = iCadastroAtletaMasculino();
    iAtletaFeminino = iCadastroAtletaFeminino();

    clrscr();

    printf("Selecione o gênero do atleta para cadastrar:\n\v1 - Feminino\n\v2 - Masculino\n\v");
    printf("Digite o número da funcionalidade desejada:");
        scanf("%d", &iEscolhaFuncionalidade);

    return 0;
}

int iCadastroAtletaMasculino (void) {
    return 0;
}

int iCadastroAtletaFeminino (void) {
    return 0;
}

int iCadastroSedeEvento (void) {
    return 0;
}

int iCadastroLocalTreino (void) {
    return 0;
}

int iCadastroEquipamentoNecessario () {

    clrscr();

    char cNomeEquipamento[25];
    int iQuantidadeEquipamento = 0;

    printf("Essa é a tela de cadastro de equipamentos!\n\v");
    printf("Digite o nome do equipamento para cadastro: ");
        getchar();
            fgets(cNomeEquipamento, 25, stdin);
                getchar();
    printf("\nAgora digite a quantidade:");
        setbuf(stdin, NULL);
            scanf("%d", &iQuantidadeEquipamento);
                getchar();

    printf("\n\vO nome do equipamento é: "); puts(cNomeEquipamento);
    printf("A quantidade do mesmo é: %d\n\v", iQuantidadeEquipamento);

    printf("Digite 1 para voltar: ");
    scanf("%d", &iEscolhaFuncionalidade);

    switch(iEscolhaFuncionalidade) {

    case 1:
        vFuncionalidadeCadastro();
    break;

    case 404:
        iErroDigitacao();
    break;

    }

    return 0;
}

int iCadastroFuncionarios (void) {
    return 0;
}

int iCadastroVoluntarios (void) {
    return 0;

}
/* 1 - Funcionalidades de Cadastro*/

/* 2 - Funcionalidades de consulta de cadastros */

void vFuncionalidadeConsultaCadastros(void) {

    clrscr();

    printf("Consulta de cadastros\n\v");

    printf("0 - Voltar\n\v");
    printf("1 - Visualizar Alojamentos Cadastrados\n\v");
    printf("2 - Visualizar Atletas Cadastrados\n\v");
    printf("3 - Visualizar Equipamento Necessarios Cadastrados\n\v");
    printf("4 - Visualizar Esportes Cadastrados\n\v");
    printf("5 - Visualizar Funcionários Cadastrados\n\v");
    printf("6 - Visualizar Locais de treino Cadastrados\n\v");
    printf("7 - Visualizar Países (Delegações) Cadastrados\n\v");
    printf("8 - Visualizar Sedes de Eventos Cadastrados\n\v");
    printf("9 - Visualizar Voluntários Cadastrados\n\v");

    printf("Digite o número da funcionalidade desejada: ");
    scanf("%d", &iEscolhaFuncionalidade);
    vVerificacaoEscolha();

    switch (iEscolhaFuncionalidade){

        case 0:
            vMenuPrincipal();
         break;

        case 1:
            vVisualizarAlojamento();
        break;

        case 2:
          vVisualizarAtletas();
        break;

        case 3:
           vVisualizarEquipamentoNecessarios();
        break;

        case 4:
            vVisualizarEsportes();
        break;

        case 5:
            vVisualizarFuncionarios();
        break;

        case 6:
            vVisualizarLocaisDeTreino();
        break;

        case 7:
            vVisualizarPaises();
        break;

        case 8:
            vVisualizarSedesDeEvento();
        break;

        case 9:
           vVisualizarVoluntarios();
        break;

        case 404:
            iErroDigitacao();
        break;
    }

    return;
}

void vVisualizarAlojamento(void) {

    clrscr();

    printf("0 - Voltar\n\v");
    printf("1 - Predio 1\n\v");
    printf("2 - Predio 2\n\v");
    printf("3 - Predio 3\n\v");
    printf("4 - Predio 4\n\v");
    printf("5 - Predio 5\n\v");

    printf("Digite o número da funcionalidade desejada: ");
    scanf("%d", &iEscolhaFuncionalidade);
    vVerificacaoEscolha();

    switch (iEscolhaFuncionalidade) {

    case 0:
        vFuncionalidadeConsultaCadastros();
    break;

    case 1:
        vMenuPrincipal();
    break;

    case 404:
        iErroDigitacao();
    break;

    };

    return;
}

void vVisualizarAtletas(void){
clrscr();
printf("\nVictor Fernando");
printf("\nRafael Cardoso");
printf("\nNatanael da Silva");
printf("\nBraian Santos");
printf("\nVVictor Laveso");
printf("\nJoao Henrique\n");
printf("Voltar\n");

return;
}

void vVisualizarEquipamentoNecessarios(void){
printf("Bolas");

return;
};
void vVisualizarEsportes(void){
clrscr();
printf("kimono (judo\n)");
printf("Uniforme\n");
printf("Vara (Salto com vara\n)");
printf("Skate\n");
printf("Sunga\n");
printf("maio\n");
printf("Oculos (Natacao)\n");
printf("Voltar\n");

return;
}
void vVisualizarFuncionarios(void){
clrscr();
printf("Ricardo Marques\n");
printf("Jose Alincar\n");
printf("Francisco Ribeiro\n");
printf("Josimar Freitas\n");
printf("Reginaldo Eliziario\n");
printf("Voltar\n");

return;
}
void vVisualizarLocaisDeTreino(void){
clrscr();
printf("Piscina Olimpica\n ");
printf("Quadra de Tenis\n ");
printf("Quadra de Volei\n");
printf("Pista Skate\n");
printf("Academia Judo\n");
printf("Voltar\n");

return;
}
void vVisualizarPaises(void){
clrscr();
printf("Brasil\n");
printf("China\n");
printf("Corea do Sul\n");
printf("Russia\n");
printf("USA\n");
printf("Voltar\n");

return;

}
void vVisualizarSedesDeEvento(void){
clrscr();
printf("Stade de France (Abertura/Encerramento)\n");
printf("Saint-Denis (Natacao)\n");
printf("Parc des Princes (Futebol)\n");
printf("Stade Roland Garros (Tenis)\n");
printf("Grand Palais Éphémère (Boxe)\n");
printf("Voltar\n");

return;

}
void vVisualizarVoluntarios(void){
clrscr();
printf("Isaac Racine\n");
printf("Donat Desruisseaux\n");
printf("Rabican St-Jean\n");
printf("Namo Tougas\n");
printf("Loring Brochu\n");
printf("Voltar\n");

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

int iFecharPrograma () {

    clrscr();

    printf("Deseja mesmo fechar o programa?\n\v1 - Sim\n\v2 - Não\n\vDigite a sua escolha: ");
    scanf("%d", &iEscolhaFuncionalidade);

    switch (iEscolhaFuncionalidade) {

    case 1:
        exit(0);
    break;

    case 2:
        vMenuPrincipal();
    break;

    }

    return 0;
}

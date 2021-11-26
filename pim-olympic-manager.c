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

// Funções do calendário Olímpico

int iCadastroEvento(void);
int iCalendarioDeEventos(void);
int iCadastroEventoOlimpico(void);
int iCadastroEventoOutros(void);
int iExemploDiaEvento(void);

// Funções do quadro de medalhas

int iAtribuirMedalha(void);
int iAtribuirMedalhaSelecaoAtl(void);
int iRanqueMedalhas(void);
int iRanqueMedalhasExemploAtleta(void);

/* Declaração das funções */

int main () {

        clrscr();
    printf("Seja bem-vindo(a) ao Olympic Manager!\n\v");
    printf("Como usar o programa?\n\vA navegação pelo sistema é feita através das teclas do seu teclado. Digite o \nnúmero correspondente a funcionalidade desejada e em seguida \npressione ENTER para confirmar a Escolha!\n\vCaso erre algum caractere durante a navegação, o programa será encerrado.\n\v");
    printf("Pressione ENTER para continuar...\n");
        getchar();
            clrscr();
    printf("Você verá o menu principal agora!\n\vEscolha a funcionalidade desejada digitando o número correspondente à ela em seguida pressione ENTER:\n\v");
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

    printf("Cadastro de alojamento\n\v");
    printf("*********IMPORTANTE*********\n");
    printf("Todos os atletas deverão ficar hospedados na Vila Olímpica, afim de evitar\npossíveis complicações com a COVID-19.\n\v");
    printf("Digite o número do prédio do alojamento: ");
        scanf("%d", &iNumPredioAlojamentoCad);
    printf("\nO número do prédio do alojamento digitado foi: Prédio %d\n\v", iNumPredioAlojamentoCad);

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

    clrscr();

    printf("Cadastro de esportes\n\v");
    printf("Deseja cadastrar uma Modalidade ou Categoria:\n\v");
    printf("1 - Modalidade\n\v2 - Categoria\n\v");
    printf("Digite o número da funcionalidade desejada: ");
        setbuf(stdin, NULL);
            scanf("%d", &iEscolhaFuncionalidade);
                vVerificacaoEscolha();

    switch (iEscolhaFuncionalidade) {

        case 0:
            vFuncionalidadeCadastro();
        break;

        case 1:
            iCadastroModalidade();
        break;

        case 2:
            iCadastroCategoria();
        break;

        case 404:
            iErroDigitacao();
        break;

    }

    return 0;
}

int iCadastroCategoria (void) {

    char cNomeModalidade[36];
    char cNomeCategoria[36];

    clrscr();

    printf("Cadastro de categoria\n\v");
    printf("Digite o nome da modalidade da categoria: ");
        getchar();
            fgets(cNomeModalidade, 36, stdin);
    printf("\vDigite o nome da categoria: ");
        fgets(cNomeCategoria, 36, stdin);
            setbuf(stdin, NULL);
        clrscr();

    printf("A modalidade digitada foi: "); puts(cNomeModalidade);
    printf("A categoria digitada foi: "); puts(cNomeCategoria);

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

int iCadastroModalidade (void) {

    char cNomeModalidade[36];

    clrscr();

    printf("Cadastro de modalidade\n\v");
    printf("Digite o nome da modalidade: ");
        getchar();
            fgets(cNomeModalidade, 36, stdin);
                setbuf(stdin, NULL);
        clrscr();

    printf("A modalidade digitada foi: "); puts(cNomeModalidade);

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

int iCadastroPaises (void) {

    char cNomePais[26];

    clrscr();

    printf("Cadastro de países\n\v");
    printf("Digite o nome do país: ");
        getchar();
            fgets(cNomePais, 26, stdin);
                setbuf(stdin, NULL);
        clrscr();

    printf("O nome do País digitado foi: "); puts(cNomePais);

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

int iCadastroAtleta (void) {

    clrscr();

    printf("Cadastro de Atleta\n\v");
    printf("Selecione o gênero do atleta para cadastrar:\n\v0 - Cancelar cadastro\n\v1 - Feminino\n\v2 - Masculino\n\v");
    printf("Digite o número da funcionalidade desejada: ");
        scanf("%d", &iEscolhaFuncionalidade);
    vVerificacaoEscolha();

    switch (iEscolhaFuncionalidade) {

        case 0:
            vFuncionalidadeCadastro();
        break;

        case 1:
            iCadastroAtletaFeminino();
        break;

        case 2:
            iCadastroAtletaMasculino();
        break;

    }

    return 0;
}

int iCadastroAtletaMasculino (void) {

    char cNomeAtleta[36];
    int iIdadeAtleta;
    double dAlturaAtleta;
    double dPesoAtleta;

    clrscr();

    printf("Cadastro de Atleta Gênero: Masculino\n\v");
    printf("Use um ponto para separar as casas decimais, por favor!\nCaso contrário o programa fechará. :D\n\v");
    printf("Digite o nome do Atleta: ");
        getchar();
            fgets(cNomeAtleta, 36, stdin);
                getchar();
    printf("Digite a idade do atleta: ");
        setbuf(stdin, NULL);
            scanf("%d", &iIdadeAtleta);
    printf("\nDigite a altura do atleta em metros(m): ");
        scanf("%lf", &dAlturaAtleta);
    printf("\nDigite o peso do atleta em Quilogramas(Kg): ");
        scanf("%lf", &dPesoAtleta);
            clrscr();
    printf("\nO nome do Atleta é: "); puts(cNomeAtleta);
    printf("A idade do atleta é: %d Anos", iIdadeAtleta);
    printf("\n\vA altura do atleta é: %1.2lfm", dAlturaAtleta);
    printf("\n\vO peso do atleta é: %1.2lfKg\n\v", dPesoAtleta);

    printf("Digite 1 para continuar: ");
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

int iCadastroAtletaFeminino (void) {

    char cNomeAtleta[36];
    int iIdadeAtleta;
    double dAlturaAtleta;
    double dPesoAtleta;

    clrscr();

    printf("Cadastro de Atleta Gênero: Feminino\n\v");
    printf("Use um ponto para separar as casas decimais, por favor!\nCaso contrário o programa fechará. :D\n\v");
    printf("Digite o nome da Atleta: ");
        getchar();
            fgets(cNomeAtleta, 36, stdin);
                getchar();
    printf("Digite a idade da atleta: ");
        setbuf(stdin, NULL);
            scanf("%d", &iIdadeAtleta);
    printf("\nDigite a altura da atleta em metros(m): ");
        scanf("%lf", &dAlturaAtleta);
    printf("\nDigite o peso da atleta em Quilogramas(Kg): ");
        scanf("%lf", &dPesoAtleta);
            clrscr();
    printf("\nO nome da Atleta é: "); puts(cNomeAtleta);
    printf("A idade da atleta é: %d Anos", iIdadeAtleta);
    printf("\n\vA altura da atleta é: %1.2lfm", dAlturaAtleta);
    printf("\n\vO peso da atleta é: %1.2lfKg\n\v", dPesoAtleta);

    printf("Digite 1 para continuar: ");
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

int iCadastroSedeEvento (void) {

    char cNomeSedeEvento[56];

    clrscr();

    printf("Cadastro de sede de evento\n\v");
    printf("Digite o nome da sede de evento: ");
        getchar();
            fgets(cNomeSedeEvento, 56, stdin);
                setbuf(stdin, NULL);
        clrscr();

    printf("O nome da sede de evento digitado foi: "); puts(cNomeSedeEvento);

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

int iCadastroLocalTreino (void) {

    char cNomeLocalTreino[56];
    int iCapacidadeMaximaLocalTreino;

    clrscr();

    printf("Cadastro de Local de Treino\n\v");
    printf("Digite o nome do Local de treino: ");
        getchar();
            fgets(cNomeLocalTreino, 56, stdin);
    printf("\nDigite a capacidade máxima do local de treino: ");
        setbuf(stdin, NULL);
            scanf("%d", &iCapacidadeMaximaLocalTreino);

    clrscr();

    printf("\nO nome do local de treino digitado foi: "); puts(cNomeLocalTreino);
    printf("A capacidade máxima digitada foi: %d pessoa(s)\n\v", iCapacidadeMaximaLocalTreino);

    printf("Digite 1 para continuar: ");
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

int iCadastroEquipamentoNecessario () {

    clrscr();

    char cNomeEquipamento[25];
    int iQuantidadeEquipamento;

    printf("Cadastro de equipamentos!\n\v");
    printf("Digite o nome do equipamento para cadastro: ");
        getchar();
            fgets(cNomeEquipamento, 25, stdin);
    printf("\nAgora digite a quantidade: ");
        setbuf(stdin, NULL);
            scanf("%d", &iQuantidadeEquipamento);
                getchar();

    printf("\nO nome do equipamento é: "); puts(cNomeEquipamento);
    printf("A quantidade necessária é: %d\n\v", iQuantidadeEquipamento);

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

    char cNomeFuncionario[56];
    char cFuncaoFuncionario[56];

    clrscr();

    printf("Cadastro de funcionarios\n\v");
    printf("Digite o nome do funcionário: ");
        getchar();
            fgets(cNomeFuncionario, 56, stdin);
                setbuf(stdin, NULL);
    printf("\nDigite a função do funcionário: ");
        getchar();
            fgets(cFuncaoFuncionario, 56, stdin);
                setbuf(stdin, NULL);

        clrscr();

    printf("O nome do funcionário digitado foi: "); puts(cNomeFuncionario);
    printf("A função do funcionário é: "); puts(cFuncaoFuncionario);

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

int iCadastroVoluntarios (void) {

    char cNomeVoluntario[56];
    char cFuncaoVoluntario[56];

    clrscr();

    printf("Cadastro de voluntarios\n\v");
    printf("Digite o nome do voluntário: ");
        getchar();
            fgets(cNomeVoluntario, 56, stdin);
                setbuf(stdin, NULL);
    printf("\nDigite a função do voluntário: ");
        getchar();
            fgets(cFuncaoVoluntario, 56, stdin);
                setbuf(stdin, NULL);

        clrscr();

    printf("O nome do voluntário digitado foi: "); puts(cNomeVoluntario);
    printf("A função do voluntário é: "); puts(cFuncaoVoluntario);

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
    printf("1 - Predio 1 : Capacidade máxima - 200 Pessoas\n\v");
    printf("2 - Predio 2 : Capacidade máxima - 450 Pessoas\n\v");
    printf("3 - Predio 3 : Capacidade máxima - 150 Pessoas\n\v");
    printf("4 - Predio 4 : Capacidade máxima - 250 Pessoas\n\v");
    printf("5 - Predio 5 : Capacidade máxima - 150 Pessoas\n\v");

    printf("Digite 0 para voltar: ");
    scanf("%d", &iEscolhaFuncionalidade);
    vVerificacaoEscolha();

    switch (iEscolhaFuncionalidade) {

    case 0:
        vFuncionalidadeConsultaCadastros();
    break;

    case 404:
        iErroDigitacao();
    break;

    };

    return;
}

void vVisualizarAtletas(void){

    clrscr();
    printf("Lista de Atletas Cadastrados\n\v");
    printf("0 - Voltar");
    printf("\n1 - Victor Fernando");
    printf("\n2 - Rafael Cardoso");
    printf("\n3 - Natanael da Silva");
    printf("\n4 - Braian Santos");
    printf("\n5 - VVictor Laveso");
    printf("\n6 - Joao Henrique\v\n");


    printf("Digite 0 para voltar: ");
        scanf("%d",&iEscolhaFuncionalidade);
            vVerificacaoEscolha();

    switch (iEscolhaFuncionalidade){

        case 0:
            vFuncionalidadeConsultaCadastros();
        break;

        case 404:
            iErroDigitacao();
        break;

    }

}

void vVisualizarEquipamentoNecessarios(void){

    clrscr();

    printf("Lista de Equipamentos Necessarios Cadastrados\n");
    printf("\n0 - Voltar");
    printf("\n1 - kimono (judo)\n");
    printf("2 - Uniforme\n");
    printf("3 - Vara (Salto com vara)\n");
    printf("4 - Skate\n");
    printf("5 - Sunga\n");
    printf("6 - Maiô\n");
    printf("7 - Oculos (Natacao)\n\v");

    printf("Digite 0 para voltar: ");
        scanf("%d",&iEscolhaFuncionalidade);
         vVerificacaoEscolha();

    switch (iEscolhaFuncionalidade){
        case 0:
            vFuncionalidadeConsultaCadastros();
        break;

        case 404:
            iErroDigitacao();
        break;
    }

    return;
}

void vVisualizarEsportes(void){

    clrscr();
    printf("Lista de Esportes Cadastrados\n");
    printf("\n0 - Voltar");
    printf("\n1 - Judo\n");
    printf("2 - Futebol\n");
    printf("3 - Skate\n");
    printf("4 - Salto com vara\n");
    printf("5 - Natacao\n\n");

    printf("Digite 0 para voltar: ");
        scanf("%d",&iEscolhaFuncionalidade);
            vVerificacaoEscolha();

    switch (iEscolhaFuncionalidade){
    case 0:
        vFuncionalidadeConsultaCadastros();
    break;

    case 404:
        iErroDigitacao();
    break;
    }

return;

}
void vVisualizarFuncionarios(void){

    clrscr();
    printf("Lista de Funcionários Cadastrados\n");
    printf("\n0 - Voltar");
    printf("\n1 - Ricardo Marques\n");
    printf("2 - Jose Alincar\n");
    printf("3 - Francisco Ribeiro\n");
    printf("4 - Josimar Freitas\n");
    printf("5 - Reginaldo Eliziario\n\v");
    printf("Digite 0 para voltar: ");
        scanf("%d",&iEscolhaFuncionalidade);
            vVerificacaoEscolha();

    switch (iEscolhaFuncionalidade){
    case 0:
        vFuncionalidadeConsultaCadastros();
    break;

    case 404:
        iErroDigitacao();
    break;
    }

return;

}
void vVisualizarLocaisDeTreino(void){

    clrscr();
    printf("Lista de Locais de treino Cadastrados\n");
    printf("\n0 - Voltar");
    printf("\n1 - Piscina Olimpica\n");
    printf("2 - Quadra de Tenis\n");
    printf("3 - Quadra de Volei\n");
    printf("4 - Pista Skate\n");
    printf("5 - Academia Judo\n\v");
    printf("Digite 0 para voltar: ");
        scanf("%d",&iEscolhaFuncionalidade);
            vVerificacaoEscolha();

    switch (iEscolhaFuncionalidade){
    case 0:
        vFuncionalidadeConsultaCadastros();
    break;

    case 404:
        iErroDigitacao();
    break;
    }

return;
}
void vVisualizarPaises(void){
    clrscr();
    printf("Lista de Paises Cadastrados\n");
    printf("\n0 - Voltar");
    printf("\n1 - Brasil\n");
    printf("2 - China\n");
    printf("3 - Corea do Sul\n");
    printf("4 - Russia\n");
    printf("5 - USA\n\v");
    printf("Digite 0 para voltar: ");
        scanf("%d",&iEscolhaFuncionalidade);
            vVerificacaoEscolha();

    switch (iEscolhaFuncionalidade){
    case 0:
        vFuncionalidadeConsultaCadastros();
    break;

    case 404:
        iErroDigitacao();
    break;
    }

return;

}
void vVisualizarSedesDeEvento(void){
    clrscr();
    printf("Lista de Sedes de evento Cadastradas\n\v");
    printf("0 - Voltar");
    printf("\n1 - Stade de France (Abertura/Encerramento)\n");
    printf("2 - Saint-Denis (Natacao)\n");
    printf("3 - Parc des Princes (Futebol)\n");
    printf("4 - Stade Roland Garros (Tenis)\n");
    printf("5 - Grand Palais Éphémère (Boxe)\n\v");
    printf("Digite 0 para voltar: ");
        scanf("%d",&iEscolhaFuncionalidade);
            vVerificacaoEscolha();

    switch (iEscolhaFuncionalidade){
    case 0:
        vFuncionalidadeConsultaCadastros();
    break;

    case 404:
        iErroDigitacao();
    break;
    }
return;

}
void vVisualizarVoluntarios(void){
    clrscr();
    printf("Lista de Voluntários Cadastrados\n");
    printf("\n1 - Isaac Racine\n");
    printf("2 - Donat Desruisseaux\n");
    printf("3 - Rabican St-Jean\n");
    printf("4 - Namo Tougas\n");
    printf("5 - Loring Brochu\n\v");
    printf("Digite 0 para voltar: ");
        scanf("%d",&iEscolhaFuncionalidade);
            vVerificacaoEscolha();

    switch (iEscolhaFuncionalidade){
    case 0:
        vFuncionalidadeConsultaCadastros();
    break;

    case 404:
        iErroDigitacao();
    break;
    }

return;

}

/* 2 - Funcionalidades de consulta de cadastros */

/* 3 - Funcionalidades do Calendário Olímpico */

void vFuncionalidadeCalendarioOlimpico (void) {

    clrscr();

    printf("\vFuncionalidades do Calendário Olímpico\n\v");

    printf("0 - Voltar\n\v");
    printf("1 - Cadastro de evento\n\v");
    printf("2 - Calendário de eventos\n\v");

    printf("Digite a funcionalidade desejada: ");
        scanf("%d", &iEscolhaFuncionalidade);

    switch (iEscolhaFuncionalidade) {

        case 0:
            vMenuPrincipal();
        break;

        case 1:
            iCadastroEvento();
        break;

        case 2:
            iCalendarioDeEventos();
        break;

        case 404:
            iErroDigitacao();
        break;
    }

    return;
}

int iCadastroEvento (void) {

    clrscr();

    printf("Cadastro de evento\n\v");

    printf("Selecione um tipo de evento para cadastrar:\n\v");
    printf("0 - Voltar\n\v");
    printf("1 - Evento olímpico\n\v");
    printf("2 - Outros\n\v");

    printf("Digite o número da funcionalidade desejada: ");
    scanf("%d", &iEscolhaFuncionalidade);
        vVerificacaoEscolha();
    switch (iEscolhaFuncionalidade) {

        case 0:
            vFuncionalidadeCalendarioOlimpico();
        break;

        case 1:
            iCadastroEventoOlimpico();
        break;

        case 2:
            iCadastroEventoOutros();
        break;

        case 404:
            iErroDigitacao();
        break;
    }

    return 0;
}

int iCadastroEventoOlimpico (void) {

    int iDiaEventoOlimpico;
    char cModalidadeEventoOlimpico[56];
    char cCategoriaEventoOlimpico[56];
    char cPaisesParticipantes[256];
    int iHoraEventoOlimpico;
    int iMinutosEventoOlimpico;

    clrscr();

    printf("Cadastro de evento: Olímpico\n\v");
    printf("Digite o dia em que o evento será realizado (Entre o dia 0 e 16): ");
        scanf("%d", &iDiaEventoOlimpico);
    printf("\nDigite a modalidade do evento olímpico: ");
        getchar();
            fgets(cModalidadeEventoOlimpico, 56, stdin);
                setbuf(stdin, NULL);
    printf("\nDigite a categoria da modalidade à ser disputada: ");
        fgets(cCategoriaEventoOlimpico, 56, stdin);
            setbuf(stdin, NULL);
    printf("\nDigite os Países que disputarão no Evento: ");
        fgets(cPaisesParticipantes, 256, stdin);
            setbuf(stdin, NULL);
    printf("\nDigite que hora que o evento acontecerá (Sem os minutos): ");
        scanf("%d", &iHoraEventoOlimpico);
            setbuf(stdin, NULL);
    printf("\nDigite os minutos que o evento acontecerá: ");
        scanf("%d", &iMinutosEventoOlimpico);
            setbuf(stdin, NULL);

        clrscr();

    printf("O dia em que ocorrerá o evento digitado foi: Dia %d\n", iDiaEventoOlimpico);
    printf("\nA modalidade à ser competida no evento digitada foi: "); puts(cModalidadeEventoOlimpico);
    printf("A categoria à ser competida no evento digitada foi: "); puts(cCategoriaEventoOlimpico);
    printf("Os Países participantes serão: "); puts(cPaisesParticipantes);
    printf("O horário em que o evento será realizado digitado foi: %d:%d (Horário de: Brasília, DF - UTC-03:00)\n\v", iHoraEventoOlimpico, iMinutosEventoOlimpico);

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

int iCadastroEventoOutros (void) {

    int iDiaEventoOutro;
    char cNomeEventoOutro[256];
    int iHoraEventoOutro;
    int iMinutosEventoOutro;

    clrscr();

    printf("Cadastro de evento: Outro\n\v");
    printf("Digite o dia em que o evento será realizado (Entre o dia 0 e 16): ");
        scanf("%d", &iDiaEventoOutro);
            setbuf(stdin, NULL);
    printf("\nDigite o nome/descrição do evento: ");
        fgets(cNomeEventoOutro, 256, stdin);
            setbuf(stdin, NULL);
    printf("\nDigite que hora que o evento acontecerá (Sem os minutos): ");
        scanf("%d", &iHoraEventoOutro);
            setbuf(stdin, NULL);
    printf("\nDigite os minutos que o evento acontecerá: ");
        scanf("%d", &iMinutosEventoOutro);
            setbuf(stdin, NULL);

        clrscr();

    printf("O dia em que ocorrerá o evento digitado foi: Dia %d\n", iDiaEventoOutro);
    printf("\nO nome do evento digitado foi: "); puts(cNomeEventoOutro);
    printf("O horário em que o evento será realizado digitado foi: %d:%d (Horário de: Brasília, DF - UTC-03:00)\n\v", iHoraEventoOutro, iMinutosEventoOutro);

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

int iCalendarioDeEventos (void) {

    clrscr();

    printf("Calendário de eventos\n\v");

    printf("Escolha um dia para visualizar os eventos cadastrados\n\v");
    printf("0 - Voltar\n\v");
    printf("1 - Dia 5\n\v");

    printf("Digite o número da funcionalidade desejada: ");
        scanf("%d", &iEscolhaFuncionalidade);
            vVerificacaoEscolha();
        switch (iEscolhaFuncionalidade) {

            case 0:
                iCadastroEvento();
            break;

            case 1:
                iExemploDiaEvento();
            break;
        }

    return 0;
}

int iExemploDiaEvento (void) {

    clrscr();

    printf("Eventos cadastrados: Dia 5\n\v");
    printf("1 - Tipo do evento: Olímpico - Volei, Brasil, França: Volei de praia | Horário - 08:00 (Horário de: Brasília, DF - UTC-03:00)\n\v"); // (Tipo do evento - Modalidade, Países participantes: Categoria | Horário - HH:MM (Fuso Horário)
    printf("2 - Tipo do evento: Outro - Cerimônia de premiação: Volei de Praia | Horário - 20:00 (Horário de: Brasília, DF - UTC-03:00)\n\v"); // (Tipo do evento - Modalidade, Países participantes: Categoria | Horário - HH:MM (Fuso Horário)
    printf("0 - Voltar\n\v");
    printf("Digite o número da funcionalidade desejada: ");
    scanf("%d", &iEscolhaFuncionalidade);

    switch (iEscolhaFuncionalidade) {

        case 0:
            iCalendarioDeEventos();
        break;

        case 404:
            iErroDigitacao();
        break;

    }

    return 0;
}

/* 3 - Funcionalidades do Calendário Olímpico */

/* 4 - Funcionalidades do Quadro de medalhas */

void vFuncionalidadeQuadroMedalhas (void) {

    clrscr();

    printf("Quadro de Medalhas\n\v");

    printf("0 - Voltar\n\v");
    printf("1 - Atribuir medalhas\n\v");
    printf("2 - Ranque de medalhas\n\v");

    printf("Digite o número da funcionalidade desejada: ");
        scanf("%d", &iEscolhaFuncionalidade);
            vVerificacaoEscolha();

    switch (iEscolhaFuncionalidade) {

        case 0:
            vMenuPrincipal();
        break;

        case 1:
            iAtribuirMedalhaSelecaoAtl();
        break;

        case 2:
            iRanqueMedalhas();
        break;

        case 404:
            ;iErroDigitacao();
        break;

    }

    return;
}

int iAtribuirMedalhaSelecaoAtl(void) {

    clrscr();

    printf("Selecione o atleta desejado para atribuir a medalha\n\v");
    printf("0 - Voltar\n\v");
    printf("1 - Braian Santos\n\v");
    printf("2 - João Henrique\n\v");
    printf("3 - Natanael Araújo\n\v");
    printf("4 - Rafael Cardoso\n\v");
    printf("5 - Victor Fernando\n\v");
    printf("6 - Victor H. Laveso\n\v");

    printf("Digite o número da funcionalidade desejada: ");
        scanf("%d", &iEscolhaFuncionalidade);
            vVerificacaoEscolha();
    switch (iEscolhaFuncionalidade) {

        case 0:
            vFuncionalidadeQuadroMedalhas();
        break;

        case 1:
            iAtribuirMedalha();
        break;

        case 404:
            iErroDigitacao();
        break;
    }

    return 0;
}

int iAtribuirMedalha (void) {

    clrscr();

    printf("Atribuir medalha\n\v");
    printf("1 - Ouro\n\v");
    printf("2 - Prata\n\v");
    printf("3 - Bronze\n\v");
    printf("Selecione uma medalha para atribuir: ");
        scanf("%d", &iEscolhaFuncionalidade);
            vVerificacaoEscolha();

    if (iEscolhaFuncionalidade == 1) {

        char cMedalhaAtleta[21] = "Medalha de ouro";

        printf("\nA medalha atribuída ao atleta foi: "); puts(cMedalhaAtleta);
        printf("\nDigite 1 para continuar: ");
            scanf("%d", &iEscolhaFuncionalidade);
                vVerificacaoEscolha();

        switch (iEscolhaFuncionalidade) {

            case 1:
                vFuncionalidadeQuadroMedalhas();
            break;

            case 404:
                iErroDigitacao();
            break;
    }

} else if (iEscolhaFuncionalidade == 2) {

    char cMedalhaAtleta[21] = "Medalha de prata";

        printf("\nA medalha atribuída ao atleta foi: "); puts(cMedalhaAtleta);
        printf("\nDigite 1 para continuar: ");
            scanf("%d", &iEscolhaFuncionalidade);
                vVerificacaoEscolha();

        switch (iEscolhaFuncionalidade) {

            case 1:
                vFuncionalidadeQuadroMedalhas();
            break;

            case 404:
                iErroDigitacao();
            break;
    }

} else if (iEscolhaFuncionalidade == 3) {

    char cMedalhaAtleta[21] = "Medalha de bronze";

        printf("\nA medalha atribuída ao atleta foi: "); puts(cMedalhaAtleta);
        printf("\nDigite 1 para continuar: ");
            scanf("%d", &iEscolhaFuncionalidade);
                vVerificacaoEscolha();

        switch (iEscolhaFuncionalidade) {

            case 1:
                vFuncionalidadeQuadroMedalhas();
            break;

            case 404:
                iErroDigitacao();
            break;
    }

} else {

    printf("Erro!");
        vMenuPrincipal();

}

    return 0;
}

int iRanqueMedalhas (void) {

    clrscr();

    printf("Ranque de medalhas\n\v");
    printf("Selecione um atleta para visualizar as medalhas:\n\v");
    printf("0 - Voltar\n\v");
    printf("1 - Braian Santos\n\v");
    printf("2 - João Henrique\n\v");
    printf("3 - Natanael Araújo\n\v");
    printf("4 - Rafael Cardoso\n\v");
    printf("5 - Victor Fernando\n\v");
    printf("6 - Victor H. Laveso\n\v");

    printf("Digite o número da funcionalidade desejada: ");
        scanf("%d", &iEscolhaFuncionalidade);
            vVerificacaoEscolha();
    switch (iEscolhaFuncionalidade) {

        case 0:
            vFuncionalidadeQuadroMedalhas();
        break;

        case 1:
            iRanqueMedalhasExemploAtleta();
        break;

        case 404:
            iErroDigitacao();
        break;

    }

    return 0;
}

int iRanqueMedalhasExemploAtleta (void) {

    clrscr();

    printf("Medalhas atribuídas ao atleta: Braian Santos\n\v");
    printf("País do atleta: Brasil\n\v");
    printf("Ouro: 6\n\vPrata: 2\n\vBronze: 8\n\v");

    printf("Digite 1 para continuar: ");
        scanf("%d", &iEscolhaFuncionalidade);
            vVerificacaoEscolha();

    switch (iEscolhaFuncionalidade) {

        case 1:
            iRanqueMedalhas();
        break;

        case 404:
            iErroDigitacao();
        break;

    }

    return 0;
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

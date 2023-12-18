#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <windows.h>
#include <mmsystem.h>
#define TAM 200

void telainicialG ();
void vitoriaPlayer1G ();
void vitoriaPlayer2G ();
void empate ();

int main ()
{
    system("color 1f");
    setlocale(LC_ALL, "");
    srand((unsigned)time(NULL));
    int opcao, cor[TAM], aleatorio[TAM], aux2=0, dificuldade, cont=0, cont2=0, pinoBranco[TAM] = {0}, pinoPreto[TAM] = {0}, pontos3[3] = {0};
    int desenho[TAM][TAM], telaInicial, opcao2, nome[TAM], nome2[3][TAM], partida, cont3=1, vit=0, der=0, repetir, pontos1=10, pontos2=0, totalpontos=0;
    int npartidas, numeroPinos, numeroPartida, numeroPartida2, numeroAleatorio;

    telainicialG();
    scanf("%d", &telaInicial);
    while(telaInicial!=1 || telaInicial!=2 || telaInicial!=3 || telaInicial!=4)
    {
        if(telaInicial==1)
        {

            system("cls");

            Beep(330, 150);
            Beep(330, 150);
            Beep(330, 150);
            Beep(264, 150);
            printf(" ---------------------------------------------------\n");
            printf(" |         !!!                                     |\n");
            printf(" |      __________                                 |\n");
            printf(" |     | (*)  (*)|                                 |\n");
            printf(" |     |     >   |        _____________            |\n");
            printf(" |     |   ----  |       |             |           |\n");
            printf(" |     -----------       |   ESCOLHA   |           |\n");
            printf(" |    |            |     |      O      |           |\n");
            printf(" | --|              |----|    MODO:    |           |\n");
            printf(" | --|              |----|             |           |\n");
            printf(" |    |            |     ---------------           |\n");
            printf(" |                                                 |\n");
            printf(" ---------------------------------------------------\n");
            printf(" |                                                 |\n");
            printf(" |                 (pressione)                     |\n");
            printf(" |                                                 |\n");
            printf(" |           1 - JOGADOR VS COMPUTADOR             |\n");
            printf(" |                                                 |\n");
            printf(" |             2 - JOGADOR VS JOGADOR              |\n");
            printf(" |                                                 |\n");
            printf(" |                  3 - VOLTAR                     |\n");
            printf(" |                                                 |\n");
            printf(" ---------------------------------------------------\n");
            scanf("%d", &opcao);


            if(opcao==1)
            {
                Beep(330, 150);
                Beep(330, 150);
                Beep(330, 150);
                Beep(264, 150);

                system("cls");
                printf(" ---------------------------------------------------\n");
                printf(" |      ######       #                             |\n");
                printf(" |      #     #     ##                             |\n");
                printf(" |      #     #    # #      * ************** *     |\n");
                printf(" |      ######       #     * _+_    - 0   _>_ *    |\n");
                printf(" |      #            #     *  x   ******   <  *    |\n");
                printf(" |      #            #     *     *      *     *    |\n");
                printf(" |      #          #####    *****        *****     |\n");
                printf(" |                                                 |\n");
                printf(" ---------------------------------------------------\n");
                printf(" |                                                 |\n");
                printf(" |            DIGITE O NOME DO PLAYER 1:           |\n");
                printf(" |                                                 |\n");
                printf(" ---------------------------------------------------\n");
                setbuf(stdin, 0);
                fgets(nome, TAM, stdin);
                nome[strlen(nome)-1] = '\0';

                for(int y=0; y<20; y++)
                {
                    pinoBranco[y] = 0;
                    pinoPreto[y] = 0;
                }

                system("cls");
                printf("|-----------------------------------------------------------------------------|\n");
                printf("|                                                                             |\n");
                printf("| ***    *   *****   *    *****    *   *   *       * *     ****   * *    **** | \n");
                printf("| *  *   *   *****   *    *        *   *   *       *  *    *  *   *  *   *    | \n");
                printf("| *  *   *   *       *    *        *   *   *       *  *    ****   *  *   **** | \n");
                printf("| *  *   *   *       *    *        *   *   *       *  *    *  *   *  *   *    | \n");
                printf("| ***    *   *       *    *****    *****   *****   * *     *  *   * *    **** | \n");
                printf("|                                                                             |\n");
                printf("|-----------------------------------------------------------------------------|\n");
                printf("|                                                                             |\n");
                printf("|                                 FÁCIL - 1                                   |\n");
                printf("|                                                                             |\n");
                printf("|                                 MÉDIO - 2                                   |\n");
                printf("|                                                                             |\n");
                printf("|                                 DIFÍCIL - 3                                 |\n");
                printf("|                                                                             |\n");
                printf("|-----------------------------------------------------------------------------|\n");
                scanf("%d", &dificuldade);

                repetir=0;
                while(repetir!=1 || repetir!=2)
                {
                    system("cls");
                    printf(" ---------------------------------------------------\n");
                    printf(" |         !!!                                     |\n");
                    printf(" |      __________                                 |\n");
                    printf(" |     | (*)  (*)|                                 |\n");
                    printf(" |     |     >   |        _____________            |\n");
                    printf(" |     |   ----  |       |             |           |\n");
                    printf(" |     -----------       |   ESCOLHA   |           |\n");
                    printf(" |    |            |     |     SE      |           |\n");
                    printf(" | --|              |----|   AS CORES  |           |\n");
                    printf(" | --|              |----|  REPETIRÃO: |           |\n");
                    printf(" |    |            |     |             |           |\n");
                    printf(" |                       ---------------           |\n");
                    printf(" ---------------------------------------------------\n");
                    printf(" |                                                 |\n");
                    printf(" |                 (pressione)                     |\n");
                    printf(" |                                                 |\n");
                    printf(" |    (2)(2)(2)      1 - SIM      (2)(2)(2)        |\n");
                    printf(" |                                                 |\n");
                    printf(" |    (4)(5)(1)      2 - NÃO      (4)(5)(1)        |\n");
                    printf(" |                                                 |\n");
                    printf(" |                                                 |\n");
                    printf(" ---------------------------------------------------\n");
                    scanf("%i",&repetir);

                    if(repetir==1 || repetir==2)
                    {
                        break;
                    }
                }

                system("cls");
                cont3=1;
                if(dificuldade==1)
                {
                    numeroPinos = 4;
                    numeroPartida = 10;
                    numeroPartida2 = 9;
                    numeroAleatorio = 6;
                }
                if(dificuldade==2)
                {
                    numeroPinos = 5;
                    numeroPartida = 12;
                    numeroPartida2 = 11;
                    numeroAleatorio = 7;
                }
                if(dificuldade==3)
                {
                    numeroPinos = 6;
                    numeroPartida = 14;
                    numeroPartida2 = 13;
                    numeroAleatorio = 8;
                }
                printf(" --------------------------------------------------\n");
                printf(" |________________________________________________|\n");
                printf("  |         LOADING 0%...  [ ] [ ] [ ] [ ]        |\n");
                printf("  |         LOADING 25%... [X] [ ] [ ] [ ]        |\n");
                printf("  |         LOADING 50%... [X] [X] [ ] [ ]        |\n");
                printf("  |         LOADING 75%... [X] [X] [X] [ ]        |\n");
                printf(" |                                                |\n");
                printf(" --------------------------------------------------\n");
                printf(" |        QUANTAS PARTIDAS VOCÊ QUER JOGAR        |\n");
                printf(" |                       ?                        |\n");
                printf(" |                                                |\n");
                printf(" --------------------------------------------------\n");
                scanf("%d", &partida);
                system("cls");
                vit = 0;
                der = 0;
                totalpontos = 0;
                for(int m=0; m<partida; m++)
                {
                    for(int n=0; n<20; n++)
                    {
                        pinoBranco[n] = 0;
                        pinoPreto[n] = 0;
                    }

                    for(int i=0; i<numeroPartida; i++)
                    {
                        for(int j=0; j<numeroPinos; j++)
                        {
                            desenho[j][i] = 0;
                        }
                    }

                    for(int i=0; i<numeroPinos; i++)
                    {
                        aleatorio[i] = (rand() % numeroAleatorio) + 1;
                        if(repetir==2)
                        {
                            for(int j=0; j<i; j++)
                            {
                                if(aleatorio[j] == aleatorio[i])
                                {
                                    i--;
                                }
                            }
                        }
                    }
                    pontos1=10;
                    for(int b=0; b<numeroPartida; b++)
                    {
                        for(int i=0; i<numeroPinos; i++)
                        {
                            /*printf("%d", aleatorio[i]);*/
                        }

                        printf("\nPLAYER 1: %s", nome);
                        printf("PARTIDA %d", cont3);
                        printf("\nPARTIDAS RESTANTES: %d", partida-cont3);
                        printf("\nPONTOS: %d", pontos1);

                        printf("\n");

                        Beep(500,100);
                        Beep(300,100);
                        Beep(500,100);

                        int aux = 1;
                        printf("-------------------------------------------------------------");
                        printf("\n1 - VERMELHO     |       **        **    **        **       |");
                        printf("\n2 - PRETO        |       * *      * *    * *      * *       |");
                        printf("\n3 - BRANCO       |       *  *    *  *    *  *    *  *       |");
                        printf("\n4 - MARROM       |       *   *  *   *    *   *  *   *       |");
                        printf("\n5 - VERDE        |       *    **    *    *    **    *       |");
                        printf("\n6 - AZUL         |       *          *    *          *       |");
                        if(dificuldade>1)
                        {
                            printf("\n7 - ROXO         |       *          *    *          *       |");
                        }
                        if(dificuldade>2)
                        {
                            printf("\n8 - ROSA         |       *          *    *          *       |");
                        }
                        printf("\n-------------------------------------------------------------\n");

                        for(int i=0; i<numeroPinos; i++)
                        {

                            printf("Digite a cor da posição %d: ", aux);
                            scanf("%d", &cor[i]);
                            desenho[i][b] = cor[i];

                            while(cor[i]<=0 || cor[i]>numeroAleatorio)
                            {
                                printf("               Atenção !!!\n");
                                printf("(Digite um número maior que 0 e menor que %i !!!)\n",numeroAleatorio+1);
                                printf("Digite a cor da posição %d: ", aux);
                                scanf("%d", &cor[i]);
                                desenho[i][b] = cor[i];
                            }

                            aux++;
                        }
                        pontos1--;
                        system("cls");

                        for(int i=numeroPartida2; i>=0; i--)
                        {
                            for(int j=0; j<numeroPinos; j++)
                            {
                                printf("(%i) ", desenho[j][i]);
                                cont=0;
                                cont2=0;
                                for(int a=0; a<numeroPinos; a++)
                                {
                                    if(cor[a]==aleatorio[a])
                                    {
                                        cont++;
                                        pinoPreto[b] = cont;
                                    }
                                    else
                                    {
                                        for(int b=0; b<numeroPinos; b++)
                                        {
                                            if(cor[a]==aleatorio[b])
                                            {
                                                cont2++;
                                            }
                                        }
                                    }

                                    pinoBranco[b] = cont2;
                                }
                            }

                            printf(" | %d PINO(S) PRETO(S) |", pinoPreto[i]);
                            printf(" %d PINO(S) BRANCO(S) |", pinoBranco[i]);
                            printf(" %d PINO(S) VAZIO(S)  |", numeroPinos-(pinoBranco[i]+pinoPreto[i]));
                            printf("\n");
                        }

                        aux2=0;
                        for(int i=0; i<numeroPinos; i++)
                        {
                            if(cor[i] == aleatorio[i])
                            {
                                aux2++;
                            }
                        }

                        if(aux2==numeroPinos)
                        {
                            printf("\n\n");
                            printf("|----------------------------------|\n");
                            printf("| *          *                     |\n");
                            printf("|  *        *                      |\n");
                            printf("|   *      *                       |\n");
                            printf("|    *    * (I)(T)(Ó)(R)(I)(A)     |\n");
                            printf("|     *  *                         |\n");
                            printf("|      **                          |\n");
                            printf("|----------------------------------|\n");
                            cont3++;
                            vit++;
                            totalpontos = totalpontos + pontos1;

                            if(m==partida-1)
                            {
                                printf("\nFIM DAS PARTIDAS");
                                printf("\n (VITÓRIAS: %d) ", vit);
                                printf("\n (DERROTAS: %d) ", der);
                                printf("\n (TOTAL DE PONTOS: %d)", totalpontos);
                            }

                            Beep(264, 150);
                            Beep(297, 150);
                            Beep(264, 150);
                            Beep(297, 150);
                            Beep(396, 150);

                            printf("\n (Voltar para a Tela Inicial - 1)\n");
                            if(m<partida-1)
                            {
                                printf("\n (Continuar jogando - 2)\n");
                            }

                            scanf("%d", &opcao2);
                            system("cls");

                            if(opcao2==1)
                            {
                                m = partida-1;
                                system("cls");
                                telainicialG();
                                scanf("%d", &telaInicial);
                            }

                            break;
                        }

                        if(b>=numeroPartida2 && aux2!=numeroPinos)
                        {
                            printf("\n\n");
                            printf("---------------------------------|\n");
                            printf("|  ****                          |\n");
                            printf("|  *   *                         |\n");
                            printf("|  *    *                        |\n");
                            printf("|  *     *(E)(R)(R)(O)(T)(A)     |\n");
                            printf("|  *     *                       |\n");
                            printf("|  *    *                        |\n");
                            printf("|  *****                         |\n");
                            printf("|--------------------------------|\n");
                            cont3++;
                            der++;
                            totalpontos = totalpontos + pontos1;

                            if(m==partida-1)
                            {
                                printf("\nFIM DAS PARTIDAS");
                                printf("\n (VITÓRIAS: %d) ", vit);
                                printf("\n (DERROTAS: %d) ", der);
                                printf("\n (TOTAL DE PONTOS: %d)", totalpontos);
                            }

                            printf("\nA ordem certa era: ");
                            for(int i=0; i<numeroPinos; i++)
                            {
                                printf("(%d)  ", aleatorio[i]);
                            }
                            Beep(495,250);
                            Beep(440,250);
                            Beep(330,550);

                            printf("\n (Voltar para a Tela Inicial - 1)\n");
                            if(m<partida-1)
                            {
                                printf("\n (Continuar jogando - 2)\n");
                            }
                            scanf("%d", &opcao2);
                            system("cls");

                            if(opcao2==1)
                            {
                                m = partida-1;
                                system("cls");
                                telainicialG();
                                scanf("%d", &telaInicial);
                            }

                        }

                    }
                }

            }

            else if(opcao==2)
            {
                system("cls");
                Beep(352,100);
                Beep(330,100);
                Beep(330,150);
                Beep(528,150);

                if(opcao==2)
                {

                    system("cls");
                    printf(" ---------------------------------------------------\n");
                    printf(" |      ######       #                             |\n");
                    printf(" |      #     #     ##                             |\n");
                    printf(" |      #     #    # #      * ************** *     |\n");
                    printf(" |      ######       #     * _+_    - 0   _>_ *    |\n");
                    printf(" |      #            #     *  x   ******   <  *    |\n");
                    printf(" |      #            #     *     *      *     *    |\n");
                    printf(" |      #          #####    *****        *****     |\n");
                    printf(" |                                                 |\n");
                    printf(" ---------------------------------------------------\n");
                    printf(" |                                                 |\n");
                    printf(" |            DIGITE O NOME DO PLAYER 1:           |\n");
                    printf(" |                                                 |\n");
                    printf(" ---------------------------------------------------\n");
                    setbuf(stdin, 0);
                    fgets(nome2[1], TAM, stdin);
                    nome2[1][strlen(nome2[1])-1] = '\0';

                    printf(" ---------------------------------------------------\n");
                    printf(" |     ######      ###                             |\n");
                    printf(" |     #     #    #   #                            |\n");
                    printf(" |     #     #    #   #     * ************** *     |\n");
                    printf(" |     ######        #     * _+_    - 0   _>_ *    |\n");
                    printf(" |     #            #      *  x   ******   <  *    |\n");
                    printf(" |     #          #        *     *      *     *    |\n");
                    printf(" |     #         ######     *****        *****     |\n");
                    printf(" |                                                 |\n");
                    printf(" ---------------------------------------------------\n");
                    printf(" |                                                 |\n");
                    printf(" |            DIGITE O NOME DO PLAYER 2:           |\n");
                    printf(" |                                                 |\n");
                    printf(" ---------------------------------------------------\n");
                    setbuf(stdin, 0);
                    fgets(nome2[2], TAM, stdin);
                    nome2[2][strlen(nome2[2])-1] = '\0';
                    pontos3[1] = 0;
                    pontos3[2] = 0;

                    for(int y=0; y<20; y++)
                    {
                        pinoBranco[y] = 0;
                        pinoPreto[y] = 0;
                    }



                    system("cls");
                    printf("|-----------------------------------------------------------------------------|\n");
                    printf("|                                                                             |\n");
                    printf("| ***    *   *****   *    *****    *   *   *       * *     ****   * *    **** | \n");
                    printf("| *  *   *   *****   *    *        *   *   *       *  *    *  *   *  *   *    | \n");
                    printf("| *  *   *   *       *    *        *   *   *       *  *    ****   *  *   **** | \n");
                    printf("| *  *   *   *       *    *        *   *   *       *  *    *  *   *  *   *    | \n");
                    printf("| ***    *   *       *    *****    *****   *****   * *     *  *   * *    **** | \n");
                    printf("|                                                                             |\n");
                    printf("|-----------------------------------------------------------------------------|\n");
                    printf("|                                                                             |\n");
                    printf("|                                 FÁCIL - 1                                   |\n");
                    printf("|                                                                             |\n");
                    printf("|                                 MÉDIO - 2                                   |\n");
                    printf("|                                                                             |\n");
                    printf("|                                 DIFÍCIL - 3                                 |\n");
                    printf("|                                                                             |\n");
                    printf("|-----------------------------------------------------------------------------|\n");
                    scanf("%d", &dificuldade);

                    repetir=0;
                    while(repetir!=1 || repetir!=2)
                    {
                        system("cls");
                        printf(" ---------------------------------------------------\n");
                        printf(" |         !!!                                     |\n");
                        printf(" |      __________                                 |\n");
                        printf(" |     | (*)  (*)|                                 |\n");
                        printf(" |     |     >   |        _____________            |\n");
                        printf(" |     |   ----  |       |             |           |\n");
                        printf(" |     -----------       |   ESCOLHA   |           |\n");
                        printf(" |    |            |     |     SE      |           |\n");
                        printf(" | --|              |----|   AS CORES  |           |\n");
                        printf(" | --|              |----|  REPETIRÃO: |           |\n");
                        printf(" |    |            |     |             |           |\n");
                        printf(" |                       ---------------           |\n");
                        printf(" ---------------------------------------------------\n");
                        printf(" |                                                 |\n");
                        printf(" |                 (pressione)                     |\n");
                        printf(" |                                                 |\n");
                        printf(" |    (2)(2)(2)      1 - SIM      (2)(2)(2)        |\n");
                        printf(" |                                                 |\n");
                        printf(" |    (4)(5)(1)      2 - NÃO      (4)(5)(1)        |\n");
                        printf(" |                                                 |\n");
                        printf(" |                                                 |\n");
                        printf(" ---------------------------------------------------\n");
                        scanf("%i",&repetir);

                        if(repetir==1 || repetir==2)
                        {
                            break;
                        }
                    }


                    system("cls");

                    cont3=1;

                    if(dificuldade==1)
                    {
                        numeroAleatorio = 6;
                        numeroPinos = 4;
                        numeroPartida = 10;
                        numeroPartida2 = 9;
                    }
                    if(dificuldade==2)
                    {
                        numeroAleatorio = 7;
                        numeroPinos = 5;
                        numeroPartida = 12;
                        numeroPartida2 = 11;
                    }
                    if(dificuldade==3)
                    {
                        numeroAleatorio = 8;
                        numeroPinos = 6;
                        numeroPartida = 14;
                        numeroPartida2 = 13;
                    }
                    partida = 1;
                    while(partida%2 != 0)
                    {
                        printf(" --------------------------------------------------\n");
                        printf(" |________________________________________________|\n");
                        printf("  |         LOADING 0%...  [ ] [ ] [ ] [ ]        |\n");
                        printf("  |         LOADING 25%... [X] [ ] [ ] [ ]        |\n");
                        printf("  |         LOADING 50%... [X] [X] [ ] [ ]        |\n");
                        printf("  |         LOADING 75%... [X] [X] [X] [ ]        |\n");
                        printf(" |                                                |\n");
                        printf(" --------------------------------------------------\n");
                        printf(" |        QUANTAS PARTIDAS VOCÊ QUER JOGAR        |\n");
                        printf(" |                       ?                        |\n");
                        printf(" |                                                |\n");
                        printf(" --------------------------------------------------\n");
                        scanf("%d", &partida);
                        system("cls");
                    }

                    vit = 0;
                    der = 0;
                    totalpontos = 0;
                    for(int np=0; np<(partida/2); np++)
                    {
                        int x = 0;
                        for(int m=1; m<3; m++)
                        {
                            for(int n=0; n<20; n++)
                            {
                                pinoBranco[n] = 0;
                                pinoPreto[n] = 0;
                            }

                            for(int i=0; i<numeroPartida; i++)
                            {
                                for(int j=0; j<numeroPinos; j++)
                                {
                                    desenho[j][i] = 0;
                                }
                            }

                            int cont5=1,al=0;

                            printf ("|-----------------------------------------|\n");
                            printf ("|            (I)(N)(S)(I)(R)(A)           |\n");
                            printf ("|                    (A)                  |\n");
                            printf ("|    ***********                          |\n");
                            printf ("|    *                                    |\n");
                            printf ("|    *                                    |\n");
                            printf ("|    *********** (E) (N) (H) (A)          |\n");
                            printf ("|              *                          |\n");
                            printf ("|              *                          |\n");
                            printf ("|    ***********                          |\n");
                            printf ("|-----------------------------------------|\n");

                            while(al<numeroPinos)
                            {
                                printf("Digite o número %d para o Player %i:\n",cont5,m);
                                scanf("%i",&aleatorio[al]);

                                while(aleatorio[al]<=0 || aleatorio[al]>numeroAleatorio)
                                {
                                    printf("               Atenção !!!\n");
                                    printf("(Digite um número maior que 0 e menor que %i !!!)\n",numeroAleatorio+1);
                                    printf("Digite o número %d para o Player %i:\n",cont5,m);
                                    scanf("%d", &aleatorio[al]);
                                }

                                cont5++;

                                if(repetir==2)
                                {
                                    for(int j=0; j<al; j++)
                                    {
                                        if(aleatorio[j] == aleatorio[al])
                                        {
                                            printf("Não repita números!\n");
                                            al--;
                                            cont5--;
                                        }
                                    }
                                }
                                al++;
                            }

                            system("cls");

                            for(int b=0; b<numeroPartida; b++)
                            {
                                for(int i=0; i<numeroPinos; i++)
                                {
                                    /*printf("%d", aleatorio[i]);*/
                                }

                                int troca=2;

                                printf("\nPLAYER %d: %s", m, nome2[m]);
                                printf("PARTIDA %d", cont3);
                                printf("\nPARTIDAS RESTANTES: %d", partida-cont3);
                                printf("\nPONTOS DO JOGADOR %d: %d", m, pontos3[m]);

                                printf("\n");

                                Beep(500,100);
                                Beep(300,100);
                                Beep(500,100);

                                int aux = 1;
                                printf("-------------------------------------------------------------");
                                printf("\n1 - VERMELHO     |       **        **    **        **       |");
                                printf("\n2 - PRETO        |       * *      * *    * *      * *       |");
                                printf("\n3 - BRANCO       |       *  *    *  *    *  *    *  *       |");
                                printf("\n4 - MARROM       |       *   *  *   *    *   *  *   *       |");
                                printf("\n5 - VERDE        |       *    **    *    *    **    *       |");
                                printf("\n6 - AZUL         |       *          *    *          *       |");
                                if(dificuldade>1)
                                {
                                    printf("\n7 - ROXO         |       *          *    *          *       |");
                                }
                                if(dificuldade>2)
                                {
                                    printf("\n8 - ROSA         |       *          *    *          *       |");
                                }
                                printf("\n-------------------------------------------------------------\n");

                                for(int i=0; i<numeroPinos; i++)
                                {
                                    printf("Digite a cor da posição %d: ", aux);
                                    scanf("%d", &cor[i]);
                                    desenho[i][b] = cor[i];

                                    while(cor[i]<=0 || cor[i]>numeroAleatorio)
                                    {
                                        printf("               Atenção !!!\n");
                                        printf("(Digite um número maior que 0 e menor que %i !!!)\n",numeroAleatorio+1);
                                        printf("Digite a cor da posição %d: ", aux);
                                        scanf("%d", &cor[i]);
                                        desenho[i][b] = cor[i];
                                    }

                                    aux++;
                                }


                                if(m==1)
                                {
                                    pontos3[2]++;
                                }
                                else if(m==2)
                                {
                                    pontos3[1]++;
                                }
                                system("cls");

                                for(int i=numeroPartida2; i>=0; i--)
                                {
                                    for(int j=0; j<numeroPinos; j++)
                                    {
                                        printf("(%i) ", desenho[j][i]);
                                        cont=0;
                                        cont2=0;
                                        for(int a=0; a<numeroPinos; a++)
                                        {
                                            if(cor[a]==aleatorio[a])
                                            {
                                                cont++;
                                                pinoPreto[b] = cont;
                                            }
                                            else
                                            {
                                                for(int b=0; b<numeroPinos; b++)
                                                {
                                                    if(cor[a]==aleatorio[b])
                                                    {
                                                        cont2++;
                                                    }
                                                }
                                            }

                                            pinoBranco[b] = cont2;
                                        }
                                    }

                                    printf(" | %d PINO(S) PRETO(S) |", pinoPreto[i]);
                                    printf(" %d PINO(S) BRANCO(S) |", pinoBranco[i]);
                                    printf(" %d PINO(S) VAZIO(S)  |", numeroPinos-(pinoBranco[i]+pinoPreto[i]));
                                    printf("\n");
                                }

                                aux2=0;
                                for(int i=0; i<numeroPinos; i++)
                                {
                                    if(cor[i] == aleatorio[i])
                                    {
                                        aux2++;
                                    }
                                }

                                if(aux2==numeroPinos)
                                {
                                    printf("\n\n");
                                    printf("|----------------------------------|\n");
                                    printf("| *          *                     |\n");
                                    printf("|  *        *                      |\n");
                                    printf("|   *      *                       |\n");
                                    printf("|    *    * (I)(T)(Ó)(R)(I)(A)     |\n");
                                    printf("|     *  *                         |\n");
                                    printf("|      **                          |\n");
                                    printf("|----------------------------------|\n");
                                    cont3++;
                                    vit++;


                                    if(x==partida-1)
                                    {
                                        if(pontos3[1] > pontos3[2])
                                        {
                                            system("cls");
                                            vitoriaPlayer1G();
                                            printf("\n         O JOGADOR 1 VENCE COM %d PONTOS\n", pontos3[1]);
                                            printf("\n         O JOGADOR 2 PERDE COM %d PONTOS\n", pontos3[2]);
                                        }
                                        else if(pontos3[2] > pontos3[1])
                                        {
                                            system("cls");
                                            vitoriaPlayer2G();
                                            printf("\n         O JOGADOR 2 VENCE COM %d PONTOS\n", pontos3[2]);
                                            printf("\n         O JOGADOR 1 PERDE COM %d PONTOS\n", pontos3[1]);
                                        }
                                        else
                                        {
                                            system("cls");
                                            empate();
                                            printf("\n     OS JOGADORES EMPATAM COM %d PONTOS", pontos3[1]);
                                        }
                                    }

                                    Beep(264, 150);
                                    Beep(297, 150);
                                    Beep(264, 150);
                                    Beep(297, 150);
                                    Beep(396, 150);

                                    printf("\n (Voltar para a Tela Inicial - 1)\n");
                                    if(x<partida-1)
                                    {
                                        printf("\n (Continuar jogando - 2)\n");
                                    }

                                    scanf("%d", &opcao2);
                                    system("cls");
                                    x++;

                                    if(opcao2==1)
                                    {
                                        m = 2;

                                        system("cls");
                                        telainicialG();
                                        scanf("%d", &telaInicial);

                                    }

                                    break;
                                }

                                if(b>=numeroPartida2 && aux2!=numeroPinos)
                                {
                                    printf("\n\n");
                                    printf("---------------------------------|\n");
                                    printf("|  ****                          |\n");
                                    printf("|  *   *                         |\n");
                                    printf("|  *    *                        |\n");
                                    printf("|  *     *(E)(R)(R)(O)(T)(A)     |\n");
                                    printf("|  *     *                       |\n");
                                    printf("|  *    *                        |\n");
                                    printf("|  *****                         |\n");
                                    printf("|--------------------------------|\n");
                                    cont3++;
                                    der++;

                                    if(x==partida-1)
                                    {
                                        if(pontos3[1] > pontos3[2])
                                        {
                                            system("cls");
                                            vitoriaPlayer1G();
                                            printf("\n         O JOGADOR 1 VENCE COM %d PONTOS\n", pontos3[1]);
                                            printf("\n         O JOGADOR 2 PERDE COM %d PONTOS\n", pontos3[2]);
                                        }
                                        else if(pontos3[2] > pontos3[1])
                                        {
                                            system("cls");
                                            vitoriaPlayer2G();
                                            printf("\n         O JOGADOR 2 VENCE COM %d PONTOS\n", pontos3[2]);
                                            printf("\n         O JOGADOR 1 PERDE COM %d PONTOS\n", pontos3[1]);
                                        }
                                        else
                                        {
                                            system("cls");
                                            empate();
                                            printf("\n     OS JOGADORES EMPATAM COM %d PONTOS", pontos3[1]);
                                        }
                                    }

                                    printf("\nA ordem certa era: ");
                                    for(int i=0; i<numeroPinos; i++)
                                    {
                                        printf("(%d)  ", aleatorio[i]);
                                    }
                                    Beep(495,250);
                                    Beep(440,250);
                                    Beep(330,550);

                                    printf("\n (Voltar para a Tela Inicial - 1)\n");
                                    if(x<partida-1)
                                    {
                                        printf("\n (Continuar jogando - 2)\n");
                                    }
                                    scanf("%d", &opcao2);
                                    system("cls");

                                    if(opcao2==1)
                                    {
                                        m = 2;
                                        system("cls");
                                        telainicialG();
                                        scanf("%d", &telaInicial);
                                    }

                                }

                            }
                        }
                    }
                }
            }
            else if(opcao==3)
            {
                system("cls");
                telainicialG();
                scanf("%d", &telaInicial);
            }

        }
        else if(telaInicial==2)
        {
            system("cls");
            printf("CASO SEJA JOGADOR VS. COMPUTADOR:\nO computador irá gerar uma sequência e o jogador\ndeverá adivinhar por meio de dedução qual a sequência correta.\nO jogador terá diferentes tentivas e diferentes tamanhos de\nsenhas à depender da dificuldade escolhida\n\n");
            printf("CASO SEJA JOGADOR VS. JOGADOR: \nOs jogadores deverão escolher um número PAR\nde rodadas e logo após revezar entre quem\ncria a senha e quem a descobre\n\n");
            printf("\n1 - INICIAR");
            printf("\n3 - SAIR");
            printf("\n4 - VOLTAR\n");
            scanf("%d", &telaInicial);
            system("cls");
        }
        else if(telaInicial==3)
        {
            system("cls");
            break;
        }
        else if(telaInicial==4)
        {
            system("cls");
            telainicialG();
            scanf("%d", &telaInicial);
        }
        else
        {
            system("cls");
            telainicialG();
            scanf("%d", &telaInicial);
        }

    }


}

void telainicialG ()
{
    printf("---------------------------------------------------\n");
    printf("| *         *               *         *           |\n");
    printf("| * *     * *               * *     * *           |\n");
    printf("| *  *   *  *               *  *   *  *           |\n");
    printf("| *   * *   *(A)(S)(T)(E)(R)*   * *   *(I)(N)(D)  |\n");
    printf("| *    *    *               *    *    *           |\n");
    printf("| *         *               *         *           |\n");
    printf("---------------------------------------------------\n");
    printf("|                                                 |\n");
    printf("|                 (pressione)                     |\n");
    printf("|                                                 |\n");
    printf("|              1 - INICIAR JOGO                   |\n");
    printf("|                                                 |\n");
    printf("|           2 - REGRAS E INSTRUÇÕES               |\n");
    printf("|                                                 |\n");
    printf("|                  3 - SAIR                       |\n");
    printf("|                                                 |\n");
    printf("---------------------------------------------------\n");
    printf("|                                                 |\n");
    printf("|    *Contrutores:                Aumente         |\n");
    printf("|   *Leonardo Augusto                o            |\n");
    printf("|    *Rodrigo Costa           volume do fone!!!   |\n");
    printf("|    *Samuel Araújo                               |\n");
    printf("|                                                 |\n");
    printf("---------------------------------------------------\n");
}

void vitoriaPlayer1G ()
{
    printf("         ________00000000000000000000000000             \n");
    printf("         ________00000000000000000000000000             \n");
    printf("         ___00000000000000000000000000000000000000      \n");
    printf("         _00000000000000000000000000000000000000000     \n");
    printf("         0000______0000000000000000000000_______0000    \n");
    printf("         000_______0000000000000000000000________000    \n");
    printf("         00________0000000000000000000000________000    \n");
    printf("         000_____00000000000000000000000000______000    \n");
    printf("         000____0000000000000000000000000000____0000    \n");
    printf("         _000___000_00000000000000000000_000____000     \n");
    printf("         _0000___000_000000000000000000_0000__0000      \n");
    printf("         ___0000__000000000000000000000000_00000        \n");
    printf("         ____00000000_0000000000000000_00000000         \n");
    printf("         ______000000__00000000000000___000000          \n");
    printf("         _______________000000000000                    \n");
    printf("         _________________00000000                      \n");
    printf("         ___________________0000                        \n");
    printf("         ___________________0000                        \n");
    printf("         ___________________0000                        \n");
    printf("         _______________000000000000                    \n");
    printf("         ____________000000000000000000                 \n");
    printf("         ____________000000000000000000                 \n");
    printf("         ____________000   PLAYER   000                 \n");
    printf("         ____________000     1      000                 \n");
    printf("         ____________000    WIN     000                 \n");
    printf("         ____________000000000000000000                 \n");
    printf("         ____________000000000000000000                 \n");
    printf("         __________0000000000000000000000               \n");
}

void vitoriaPlayer2G ()
{
    printf("         ________00000000000000000000000000             \n");
    printf("         ________00000000000000000000000000             \n");
    printf("         ___00000000000000000000000000000000000000      \n");
    printf("         _00000000000000000000000000000000000000000     \n");
    printf("         0000______0000000000000000000000_______0000    \n");
    printf("         000_______0000000000000000000000________000    \n");
    printf("         00________0000000000000000000000________000    \n");
    printf("         000_____00000000000000000000000000______000    \n");
    printf("         000____0000000000000000000000000000____0000    \n");
    printf("         _000___000_00000000000000000000_000____000     \n");
    printf("         _0000___000_000000000000000000_0000__0000      \n");
    printf("         ___0000__000000000000000000000000_00000        \n");
    printf("         ____00000000_0000000000000000_00000000         \n");
    printf("         ______000000__00000000000000___000000          \n");
    printf("         _______________000000000000                    \n");
    printf("         _________________00000000                      \n");
    printf("         ___________________0000                        \n");
    printf("         ___________________0000                        \n");
    printf("         ___________________0000                        \n");
    printf("         _______________000000000000                    \n");
    printf("         ____________000000000000000000                 \n");
    printf("         ____________000000000000000000                 \n");
    printf("         ____________000   PLAYER   000                 \n");
    printf("         ____________000     2      000                 \n");
    printf("         ____________000    WIN     000                 \n");
    printf("         ____________000000000000000000                 \n");
    printf("         ____________000000000000000000                 \n");
    printf("         __________0000000000000000000000               \n");
}

void empate ()
{
    printf("     _______00_________________________________00            \n");
    printf("     ______0__0_______________________________0__0           \n");
    printf("     ______0__0_______________________________0__0           \n");
    printf("     ______0__0_______________________________0__0           \n");
    printf("     _00____0__0_____________________________0__0____00      \n");
    printf("     0__0___0__0_____________________________0__0___0__0     \n");
    printf("     0__0___0__0_____________________________0__0___0__0     \n");
    printf("     _0___0__0__0___________________________0__0__0___0      \n");
    printf("     __0___0000000_________________________0000000___0       \n");
    printf("     ___0____0___0_________________________0___0____0        \n");
    printf("     ___0____0___0_________________________0___0____0        \n");
    printf("     ___0___0__00_0_________00000_________0_00__0___0        \n");
    printf("     ___0___0__0__0_______00_____00_______0__0__0___0        \n");
    printf("     ____000000___0______0_________0______0___000000         \n");
    printf("     ____0___0___0_0____0__8____8___0____0_0___0___0         \n");
    printf("     _____000___0___0___0___________0___0___0___000          \n");
    printf("     ________00000___0_0_____________0_0___00000             \n");
    printf("     _____________00__00_00000000000_00__00                  \n");
    printf("     _______________0__0_0__0___0__0_0__0                    \n");
    printf("     ________________0_0_0__0___0__0_0_0                     \n");
    printf("     __________________00_0_0___0_0_00                       \n");
    printf("     ___________________0__0000000__0                        \n");
    printf("     _____________________00_____00                          \n");
    printf("     _______________________00000                            \n");
    printf("                                                             \n");
    printf("            E      M      P      A      T      E             \n");
    printf("                                                             \n");
}

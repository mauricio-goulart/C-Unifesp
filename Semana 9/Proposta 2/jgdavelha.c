#include <stdio.h>

#define RED "\033[1;31m"
#define BLUE "\033[1;34m"
#define RESET "\033[0m"




int main()
{
    int p1l,p1c,p2l,p2c, v = 0;
    char jogo[3][3] = {{'=','=','='},{'=','=','='},{'=','=','='}}, cond = 'n';

    printf("===============================\n");
    printf("\tJOGO DA VELHA\n");
    printf("===============================\n\n");

    

    do
    {
        /*<-----PLAYER 1----->*/
        printf("------------------------------\n");
        printf(RED"Player 1\n");
        printf(RESET"------------------------------\n");

        for ( int l = 0; l < 3; l++)
    {
        for (int c = 0; c < 3; c ++)
        {
            printf("\t%c",jogo[l][c]);
        }

        printf("\n");
        
    }
        
        printf("------------------------------\n");


        printf("Qual a sua jogada?\n");
        printf("Linha: ");
        scanf("%i",&p1l);
        printf("Coluna: ");
        scanf("%i",&p1c);
        printf("------------------------------\n");

        if (jogo[p1l - 1][p1c - 1] == 'o')
        {
            printf("[Jogada Invalida!]\n");
            printf("Digite novamente\n");
            printf("------------------------------\n");
            printf("Linha: ");
            scanf("%i",&p1l);
            printf("Coluna: ");
            scanf("%i",&p1c);
            printf("------------------------------\n");           
        }
        

        jogo[p1l - 1][p1c - 1] = 'x';

        for ( int l = 0; l < 3; l++)
    {
        for (int c = 0; c < 3; c ++)
        {
            printf("\t%c",jogo[l][c]);
        }

        printf("\n");
        
    }


        
        
        
        
        if((jogo[0][0] == 'x' && jogo[0][1] == 'x' && jogo[0][2] == 'x') ||
            (jogo[1][0] == 'x' && jogo[1][1] == 'x' && jogo[1][2] == 'x') ||
            (jogo[2][0] == 'x' && jogo[2][1] == 'x' && jogo[2][2] == 'x') ||
            (jogo[0][0] == 'x' && jogo[1][0] == 'x' && jogo[2][0] == 'x') ||
            (jogo[0][1] == 'x' && jogo[1][1] == 'x' && jogo[2][1] == 'x') ||
            (jogo[0][2] == 'x' && jogo[1][2] == 'x' && jogo[2][2] == 'x') ||
            (jogo[0][0] == 'x' && jogo[1][1] == 'x' && jogo[2][2] == 'x') ||
            (jogo[0][2] == 'x' && jogo[1][1] == 'x' && jogo[2][0] == 'x'))
        {
            printf("------------------------------\n");
            printf(RED"Jogador 1 Ganhou\n"RESET);
            cond = 's';
            break;
                
                    
        }
            
            
        v++;
            

        if (v == 9)
        {
            printf("------------------------------\n");
            printf("EMPATE\n");
            cond = 's';
            break;
        }
        
        
            
        
        
        
        

        /*<-----PLAYER 2----->*/
        printf("------------------------------\n");
        printf(BLUE"Player 2\n");
        printf(RESET"------------------------------\n");

        for ( int l = 0; l < 3; l++)
    {
        for (int c = 0; c < 3; c ++)
        {
            printf("\t%c",jogo[l][c]);
        }

        printf("\n");
        
    }

        printf("------------------------------\n");


        printf("Qual a sua jogada?\n");
        printf("Linha: ");
        scanf("%i",&p2l);
        printf("Coluna: ");
        scanf("%i",&p2c);
        printf("------------------------------\n");


        if (jogo[p2l - 1][p2c - 1] == 'x')
        {
            printf("[Jogada Invalida!]\n");
            printf("Digite novamente\n");
            printf("------------------------------\n");
            printf("Linha: ");
            scanf("%i",&p2l);
            printf("Coluna: ");
            scanf("%i",&p2c);
            printf("------------------------------\n");           
        }


        jogo[p2l - 1][p2c - 1] = 'o';

        for ( int l = 0; l < 3; l++)
    {
        for (int c = 0; c < 3; c ++)
        {
            printf("\t%c",jogo[l][c]);
        }

        printf("\n");
        
    }

        if ((jogo[0][0] == 'o' && jogo[0][1] == 'o' && jogo[0][2] == 'o') ||
            (jogo[1][0] == 'o' && jogo[1][1] == 'o' && jogo[1][2] == 'o') ||
            (jogo[2][0] == 'o' && jogo[2][1] == 'o' && jogo[2][2] == 'o') ||
            (jogo[0][0] == 'o' && jogo[1][0] == 'o' && jogo[2][0] == 'o') ||
            (jogo[0][1] == 'o' && jogo[1][1] == 'o' && jogo[2][1] == 'o') ||
            (jogo[0][2] == 'o' && jogo[1][2] == 'o' && jogo[2][2] == 'o') ||
            (jogo[0][0] == 'o' && jogo[1][1] == 'o' && jogo[2][2] == 'o') ||
            (jogo[0][2] == 'o' && jogo[1][1] == 'o' && jogo[2][0] == 'o'))
        {
            printf("------------------------------\n");
            printf(BLUE"Jogador 2 Ganhou\n"RESET);
            cond = 's';
            break;
        }
        
        v++;

        
        


    } while (cond == 'n');
    
}
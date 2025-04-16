#include <stdio.h>

int main() {
    
    int tabuleiro[10][10];

    char y = 'A';
    int x = 1;

    //  Criando e definindo os limites dos navios.
    int navioVertical[3] = {3, 3, 3};
    int navioHorizontal[3] = {3, 3, 3};
    int navioDiagonal1[3] = {3,3,3};
    int navioDiagonal2[3] = {3,3,3};

    //Colocando os zeros para formar o tabuleiro.
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){

            tabuleiro[i][j] = 0;
        }
    }

    //colocando os navios no tabuleiro por meio do loop for com múltiplas variáveis.
    for(int i = 0, j = 5; i < 3; i++, j++){
        tabuleiro[1][j] = navioHorizontal[i];
    }

    for(int i = 0, j = 6; i < 3; i++, j++){
        tabuleiro[j][4] = navioVertical[i];
    }
    //Espaçamento para organizar a saída de dados.
    printf("    ");

    //navio na diagonal principal
    for(int i = 0; i < 3; i ++){
            tabuleiro[2 + i][2 + i] = navioDiagonal1[i];
        }
    //navio na diagonal secundária
    for(int i = 0; i< 3; i ++){
        tabuleiro[9-i][i] = navioDiagonal2[i];
    }
         //Exibir o tabuleiro.
    //coordenada y
    for(int i = 0; i < 10; i++){
        printf("%c ", y);
        y++;
    }
    printf("\n");
    for(int i = 0; i < 10; i++){

    //coordenada x    
    if(x == 10){
         printf(" %d ", x);
    } else{
     printf("  %d ", x);
     x++;
}

    for(int j = 0; j < 10; j++){
              
    printf("%d ",tabuleiro[i][j]);
        
    }
    printf("\n");
 }
    }

   

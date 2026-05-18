#include <stdio.h>

int main() {

    char continuar = 's';
    
printf("\n |-=================-|JOGO DOS TORCEDORES DO SANTOS|-=================-|\n");

    int vitoriasX = 0;
    int vitoriasO = 0;
    int empates = 0;

    while(continuar == 's' || continuar == 'S') {

        char v[3][3] = {
            {' ',' ',' '},
            {' ',' ',' '},
            {' ',' ',' '}
        };

        int l, c;
        char jogador = 'X';
        int venceu = 0;

        for(int jogada = 0; jogada < 9; jogada++) {

            printf("\n");

            for(int i = 0; i < 3; i++) {

                for(int j = 0; j < 3; j++) {

                    printf(" %c ", v[i][j]);

                    if(j < 2)
                        printf("|");
                }

                printf("\n");

                if(i < 2)
                    printf("-----------\n");
            }

            printf("\nJogador %c\n", jogador);
            printf("Linha e coluna: ");
            scanf("%d %d", &l, &c);

            if(v[l][c] != ' ') {

                printf("Posicao ocupada!\n");
                jogada--;
                continue;
            }

            v[l][c] = jogador;

            for(int i = 0; i < 3; i++) {

                if(v[i][0] == jogador &&
                   v[i][1] == jogador &&
                   v[i][2] == jogador) {

                    venceu = 1;
                }

                if(v[0][i] == jogador &&
                   v[1][i] == jogador &&
                   v[2][i] == jogador) {

                    venceu = 1;
                }
            }

            if(v[0][0] == jogador &&
               v[1][1] == jogador &&
               v[2][2] == jogador) {

                venceu = 1;
            }

            if(v[0][2] == jogador &&
               v[1][1] == jogador &&
               v[2][0] == jogador) {

                venceu = 1;
            }

            if(venceu) {

                printf("\n");

                for(int i = 0; i < 3; i++) {

                    for(int j = 0; j < 3; j++) {

                        printf(" %c ", v[i][j]);

                        if(j < 2)
                            printf("|");
                    }

                    printf("\n");

                    if(i < 2)
                        printf("-----------\n");
                }

                printf("\nJogador %c deu uma de neymar!\n", jogador);

                if(jogador == 'X')
                    vitoriasX++;
                else
                    vitoriasO++;

                break;
            }

            if(jogador == 'X')
                jogador = 'O';
            else
                jogador = 'X';


            if(jogada == 8 && !venceu) {

                printf("\ndeu veia!\n");
                empates++;
            }
        }

        printf("\n|-===-| PLACAR |-===-|\n");
        printf("X: %d vitorias\n", vitoriasX);
        printf("O: %d vitorias\n", vitoriasO);
        printf("veia: %d\n", empates);

        printf("\nrevanche? (s/n): ");
        scanf(" %c", &continuar);
    }

    printf("\nacabou!\n");

    return 0;
}
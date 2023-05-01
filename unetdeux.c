//Developped by Bensititou Sofiane (Start the 30 April 2023)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void display(int tab[3][3]);


void mark1at00(int tab[3][3]);
void mark1at01(int tab[3][3]);
void mark1at02(int tab[3][3]);
void mark1at11(int tab[3][3]);
void mark1at12(int tab[3][3]);
void mark1at13(int tab[3][3]);
void mark1at20(int tab[3][3]);
void mark1at21(int tab[3][3]);
void mark1at22(int tab[3][3]);

void mark2at00(int tab[3][3]);
void mark2at01(int tab[3][3]);
void mark2at02(int tab[3][3]);
void mark2at11(int tab[3][3]);
void mark2at12(int tab[3][3]);
void mark2at13(int tab[3][3]);
void mark2at20(int tab[3][3]);
void mark2at21(int tab[3][3]);
void mark2at22(int tab[3][3]);


void player1(int tab[3][3], int *ptrIs00Used, int *ptrIs01Used, int *ptrIs02Used, int *ptrIs10Used, int *ptrIs11Used, int *ptrIs12Used, int *ptrIs20Used, int *ptrIs21Used, int *ptrIs22Used, int *ptrIsPlayer1Played, int *ptrIsPlayer1Won);
void player2(int tab[3][3], int *ptrIs00Used, int *ptrIs01Used, int *ptrIs02Used, int *ptrIs10Used, int *ptrIs11Used, int *ptrIs12Used, int *ptrIs20Used, int *ptrIs21Used, int *ptrIs22Used, int *ptrIsPlayer2Played, int *ptrIsPlayer2Won);


// --- Program and data ---
int main(void){

    printf("\n");
    printf("                                       /$$                 /$$                               \n");
    printf("                                      | $$                | $$                               \n");
    printf(" /$$   /$$ /$$$$$$$         /$$$$$$  /$$$$$$          /$$$$$$$  /$$$$$$  /$$   /$$ /$$   /$$ \n");
    printf("| $$  | $$| $$__  $$       /$$__  $$|_  $$_/         /$$__  $$ /$$__  $$| $$  | $$|  $$ /$$/ \n");
    printf("| $$  | $$| $$  / $$      | $$$$$$$$  | $$          | $$  | $$| $$$$$$$$| $$  | $$ /  $$$$/  \n");
    printf("| $$  | $$| $$  | $$      | $$_____/  | $$ /$$      | $$  | $$| $$_____/| $$  | $$  >$$  $$  \n");
    printf("|  $$$$$$/| $$  | $$      |  $$$$$$$  |  $$$$/      |  $$$$$$$|  $$$$$$$|  $$$$$$/ /$$//  $$ \n");
    printf("/______/ |__/  |__/       /_______/   /___/         /_______/ /_______/ /______/ |__/  /__/ \n");
    printf("\n");
    printf("                                                       Developped with love by Benstitou Sofiane");

    // START DATA
    int plateau[3][3] = {
        {0,0,0},
        {0,0,0},
        {0,0,0}
    };

    int is00Used = 0;
    int is01Used = 0;
    int is02Used = 0;
    int is10Used = 0;
    int is11Used = 0;
    int is12Used = 0;
    int is20Used = 0;
    int is21Used = 0;
    int is22Used = 0;

    /* Pointer isUsed reference : to code quickly
    int *ptrIs00Used = &is00Used;
    int *ptrIs01Used = &is01Used;
    int *ptrIs02Used = &is02Used;
    int *ptrIs10Used = &is11Used;
    int *ptrIs11Used = &is12Used;
    int *ptrIs12Used = &is13Used;
    int *ptrIs20Used = &is20Used;
    int *ptrIs21Used = &is21Used;
    int *ptrIs22Used = &is22Used;
    */

    int isPlayer1Played = 0;
    int isPlayer2Played = 0;

    /* Pointer isPlayerPlayed reference :
    int *ptrIsPlayer1Played = &isPlayer1Played
    int *ptrIsPlayer2Played = &isPlayer2Played    
    */

    int isPlayer1Won = 0;
    int isPlayer2Won = 0;

    /* Pointer isPlayerWon reference :
    int *ptrIsPlayer1Won = &isPlayer1Won
    int *ptrIsPlayer2Won = &isPlayer2Won    
    */

    // END DATA

    display(plateau);
    
    while (isPlayer1Won == 0 && isPlayer2Played == 0){
        if (plateau[0][0] != 0 && plateau[0][1] != 0 && plateau[0][2] != 0 && plateau[1][0] != 0 && plateau[1][1] != 0 && plateau[1][2] != 0 && plateau[2][0] != 0 && plateau[2][1] != 0 && plateau[2][2] != 0){
            break;
        }
        player1(plateau, &is00Used, &is01Used, &is02Used, &is10Used, &is11Used, &is12Used, &is20Used, &is21Used, &is22Used, &isPlayer1Played, &isPlayer1Won);
        display(plateau);
        if (isPlayer1Won == 1){
            printf("Player 1 Win ! \n");
            break;
        }
        if (plateau[0][0] != 0 && plateau[0][1] != 0 && plateau[0][2] != 0 && plateau[1][0] != 0 && plateau[1][1] != 0 && plateau[1][2] != 0 && plateau[2][0] != 0 && plateau[2][1] != 0 && plateau[2][2] != 0){
            break;
        }
        player2(plateau, &is00Used, &is01Used, &is02Used, &is10Used, &is11Used, &is12Used, &is20Used, &is21Used, &is22Used, &isPlayer2Played, &isPlayer2Won);
        display(plateau);
        if (isPlayer2Won == 1){
            printf("Player 2 Win ! \n");
            break;
        }
    }
    
    
    if (isPlayer1Won == 0 && isPlayer2Won == 0){
        printf("DRAW ! \n");
    }
    /* for debugging 
    printf("P1 : %d\n", isPlayer1Won);
    printf("P2 : %d\n", isPlayer2Won);
    */
    return 0;
}
// -----------------

void display(int tab[3][3]){
    printf("\n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("[%d]", tab[i][j]);
        }
    printf("\n");
    }
    printf("\n");
}


void mark1at00(int tab[3][3]){
    tab[0][0] = 1;
}
void mark1at01(int tab[3][3]){
    tab[0][1] = 1;
}
void mark1at02(int tab[3][3]){
    tab[0][2] = 1;
}
void mark1at10(int tab[3][3]){
    tab[1][0] = 1;
}
void mark1at11(int tab[3][3]){
    tab[1][1] = 1;
}
void mark1at12(int tab[3][3]){
    tab[1][2] = 1;
}
void mark1at20(int tab[3][3]){
    tab[2][0] = 1;
}
void mark1at21(int tab[3][3]){
    tab[2][1] = 1;
}
void mark1at22(int tab[3][3]){
    tab[2][2] = 1;
}


void mark2at00(int tab[3][3]){
    tab[0][0] = 2;
}
void mark2at01(int tab[3][3]){
    tab[0][1] = 2;
}
void mark2at02(int tab[3][3]){
    tab[0][2] = 2;
}
void mark2at10(int tab[3][3]){
    tab[1][0] = 2;
}
void mark2at11(int tab[3][3]){
    tab[1][1] = 2;
}
void mark2at12(int tab[3][3]){
    tab[1][2] = 2;
}
void mark2at20(int tab[3][3]){
    tab[2][0] = 2;
}
void mark2at21(int tab[3][3]){
    tab[2][1] = 2;
}
void mark2at22(int tab[3][3]){
    tab[2][2] = 2;
}


void player1(int tab[3][3], int *ptrIs00Used, int *ptrIs01Used, int *ptrIs02Used, int *ptrIs10Used, int *ptrIs11Used, int *ptrIs12Used, int *ptrIs20Used, int *ptrIs21Used, int *ptrIs22Used, int *ptrIsPlayer1Played, int *ptrIsPlayer1Won){
    char lineInput[256];
    char columnInput[256];
    int line;
    int column;
    while (*ptrIsPlayer1Played == 0){
        printf("[LINE] - P1 : ");
        scanf("%s", lineInput);
        if (strcmp(lineInput, "quit") == 0){
            printf("%s\n", lineInput);
            printf("END OF THE GAME\n");
            exit(0);
        }

        printf("[COLUMN] - P1 : ");
        scanf("%s", columnInput);
        if (strcmp(columnInput, "quit") == 0){
            printf("%s\n", lineInput);
            printf("END OF THE GAME\n");
            exit(0);
        }

        line = atoi(lineInput);
        column = atoi(columnInput);

        if ((line < 0 || line > 2) || (column < 0 || column > 2)){
            printf("\nLine or column out of range ! \n\n");
        }
        else {
            if (line == 0 && column == 0){
                if (*ptrIs00Used == 0){    
                    mark1at00(tab);
                    *ptrIs00Used = 1;
                    *ptrIsPlayer1Played = 1;
                } else {
                    printf("\nCase already used \n\n");
                } 
            }
            else if (line == 0 && column == 1){
                if (*ptrIs01Used == 0){    
                    mark1at01(tab);
                    *ptrIs01Used = 1;
                    *ptrIsPlayer1Played = 1;
                } else {
                    printf("Case already used \n");
                } 
            }
            else if (line == 0 && column == 2){
                if (*ptrIs02Used == 0){    
                    mark1at02(tab);
                    *ptrIs02Used = 1;
                    *ptrIsPlayer1Played = 1;
                } else {
                    printf("Case already used \n");
                } 
            }
            else if (line == 1 && column == 0){
                if (*ptrIs10Used == 0){    
                    mark1at10(tab);
                    *ptrIs10Used = 1;
                    *ptrIsPlayer1Played = 1;
                } else {
                    printf("Case already used \n");
                } 
            }
            else if (line == 1 && column == 1){
                if (*ptrIs11Used == 0){    
                    mark1at11(tab);
                    *ptrIs11Used = 1;
                    *ptrIsPlayer1Played = 1;
                } else {
                    printf("Case already used \n");
                } 
            }
            else if (line == 1 && column == 2){
                if (*ptrIs12Used == 0){    
                    mark1at12(tab);
                    *ptrIs12Used = 1;
                    *ptrIsPlayer1Played = 1;
                } else {
                    printf("Case already used \n");
                } 
            }
            else if (line == 2 && column == 0){
                if (*ptrIs20Used == 0){    
                    mark1at20(tab);
                    *ptrIs20Used = 1;
                    *ptrIsPlayer1Played = 1;
                } else {
                    printf("Case already used \n");
                } 
            }
            else if (line == 2 && column == 1){
                if (*ptrIs21Used == 0){    
                    mark1at21(tab);
                    *ptrIs21Used = 1;
                    *ptrIsPlayer1Played = 1;
                } else {
                    printf("Case already used \n");
                } 
            }
            else if (line == 2 && column == 2){
                if (*ptrIs22Used == 0){    
                    mark1at22(tab);
                    *ptrIs22Used = 1;
                    *ptrIsPlayer1Played = 1;
                } else {
                    printf("Case already used \n");
                } 
            }
        }
    }
    *ptrIsPlayer1Played = 0;

    if (tab[0][0] == 1 && tab[0][1] == 1 && tab[0][2] == 1){
            *ptrIsPlayer1Won = 1;
    }
    else if (tab[1][0] == 1 && tab[1][1] == 1 && tab[1][2] == 1){
            *ptrIsPlayer1Won = 1;
    }
    else if (tab[2][0] == 1 && tab[2][1] == 1 && tab[2][2] == 1){
            *ptrIsPlayer1Won = 1;
    }
    else if (tab[0][0] == 1 && tab[1][0] == 1 && tab[2][0] == 1){
            *ptrIsPlayer1Won = 1;
    }
    else if (tab[0][1] == 1 && tab[1][1] == 1 && tab[2][1] == 1){
            *ptrIsPlayer1Won = 1;
    }
    else if (tab[0][2] == 1 && tab[1][2] == 1 && tab[2][2] == 1){
            *ptrIsPlayer1Won = 1;
    }
    else if (tab[0][0] == 1 && tab[1][1] == 1 && tab[2][2] == 1){
            *ptrIsPlayer1Won = 1;
    }
    else if (tab[0][2] == 1 && tab[1][1] == 1 && tab[2][0] == 1){
            *ptrIsPlayer1Won = 1;
    }
    
}

void player2(int tab[3][3], int *ptrIs00Used, int *ptrIs01Used, int *ptrIs02Used, int *ptrIs10Used, int *ptrIs11Used, int *ptrIs12Used, int *ptrIs20Used, int *ptrIs21Used, int *ptrIs22Used, int *ptrIsPlayer2Played, int *ptrIsPlayer2Won){
    char lineInput[256];
    char columnInput[256];
    int line;
    int column;
    while (*ptrIsPlayer2Played == 0){
        printf("[LINE] - P2 : ");
        scanf("%s", lineInput);
        if (strcmp(lineInput, "quit") == 0){
            printf("%s\n", lineInput);
            printf("END OF THE GAME\n");
            exit(0);
        }
        
        printf("[COLUMN] - P2 : ");
        scanf("%s", columnInput);
        if (strcmp(columnInput, "quit") == 0){
            printf("%s\n", lineInput);
            printf("END OF THE GAME\n");
            exit(0);
        }

        line = atoi(lineInput);
        column = atoi(columnInput);

        if ((line < 0 || line > 2) || (column < 0 || column > 2)){
            printf("\nLine or column out of range ! \n\n");
        }
        else {
            if (line == 0 && column == 0){
                if (*ptrIs00Used == 0){    
                    mark2at00(tab);
                    *ptrIs00Used = 1;
                    *ptrIsPlayer2Played = 1;
                } else {
                    printf("\nCase already used \n\n");
                } 
            }
            else if (line == 0 && column == 1){
                if (*ptrIs01Used == 0){    
                    mark2at01(tab);
                    *ptrIs01Used = 1;
                    *ptrIsPlayer2Played = 1;
                } else {
                    printf("Case already used \n");
                } 
            }
            else if (line == 0 && column == 2){
                if (*ptrIs02Used == 0){    
                    mark2at02(tab);
                    *ptrIs02Used = 1;
                    *ptrIsPlayer2Played = 1;
                } else {
                    printf("Case already used \n");
                } 
            }
            else if (line == 1 && column == 0){
                if (*ptrIs10Used == 0){    
                    mark2at10(tab);
                    *ptrIs10Used = 1;
                    *ptrIsPlayer2Played = 1;
                } else {
                    printf("Case already used \n");
                } 
            }
            else if (line == 1 && column == 1){
                if (*ptrIs11Used == 0){    
                    mark2at11(tab);
                    *ptrIs11Used = 1;
                    *ptrIsPlayer2Played = 1;
                } else {
                    printf("Case already used \n");
                } 
            }
            else if (line == 1 && column == 2){
                if (*ptrIs12Used == 0){    
                    mark2at12(tab);
                    *ptrIs12Used = 1;
                    *ptrIsPlayer2Played = 1;
                } else {
                    printf("Case already used \n");
                } 
            }
            else if (line == 2 && column == 0){
                if (*ptrIs20Used == 0){    
                    mark2at20(tab);
                    *ptrIs20Used = 1;
                    *ptrIsPlayer2Played = 1;
                } else {
                    printf("Case already used \n");
                } 
            }
            else if (line == 2 && column == 1){
                if (*ptrIs21Used == 0){    
                    mark2at21(tab);
                    *ptrIs21Used = 1;
                    *ptrIsPlayer2Played = 1;
                } else {
                    printf("Case already used \n");
                } 
            }
            else if (line == 2 && column == 2){
                if (*ptrIs22Used == 0){    
                    mark2at22(tab);
                    *ptrIs22Used = 1;
                    *ptrIsPlayer2Played = 1;
                } else {
                    printf("Case already used \n");
                } 
            }
        }
    }
    *ptrIsPlayer2Played = 0;

    if (tab[0][0] == 2 && tab[0][1] == 2 && tab[0][2] == 2){
            *ptrIsPlayer2Won = 1;
    }
    else if (tab[1][0] == 2 && tab[1][1] == 2 && tab[1][2] == 2){
            *ptrIsPlayer2Won = 1;
    }
    else if (tab[2][0] == 2 && tab[2][1] == 2 && tab[2][2] == 2){
            *ptrIsPlayer2Won = 1;
    }
    else if (tab[0][0] == 2 && tab[1][0] == 2 && tab[2][0] == 2){
            *ptrIsPlayer2Won = 1;
    }
    else if (tab[0][1] == 2 && tab[1][1] == 2 && tab[2][1] == 2){
            *ptrIsPlayer2Won = 1;
    }
    else if (tab[0][2] == 2 && tab[1][2] == 2 && tab[2][2] == 2){
            *ptrIsPlayer2Won = 1;
    }
    else if (tab[0][0] == 2 && tab[1][1] == 2 && tab[2][2] == 2){
            *ptrIsPlayer2Won = 1;
    }
    else if (tab[0][2] == 2 && tab[1][1] == 2 && tab[2][0] == 2){
            *ptrIsPlayer2Won = 1;
    }
    
}
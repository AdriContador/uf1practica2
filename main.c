#include <stdio.h>
#define ROWS 10
#define COLS 10


void main (){
  int dificultat, fila, col, i, j, count;
  char columna;
  printf("*************************************\n**********THE BATTLESHIP GAME**********\n*************************************\n \n");
  printf("1. Fàcil\n2. Difícil\n3. Molt Compicat\nQualsevol altre número. No m'hi atreveixo (SORTIR)\n");
  printf ("Selecciona una dificultat:\n");
  scanf ("%d", &dificultat);
  switch (dificultat){
           case 1:
               printf ("Has seleccionat dificultat: Fàcil\n");
               printf ("\n  A  B  C  D  E  F  G  H  I  J\n");
                      for (i = 0; i < ROWS; i++){
                          count=i+1;
                          printf("%d", count);
                             for (j = 0; j < COLS; j++){
                                printf("[ ]");
                             }
                             printf("\n");
                          }
                       do {
                           printf("\n Introdueix la fila: ");
                           scanf("%d", &fila);
                           fila=fila-1;
                       } while (fila < 0 || fila > 9);
                      do {
                          printf("\n Introduce la columna: ");
                          scanf(" %c", &columna);
                          if (columna == 65 || columna == 98) {
                                  col = 0;
                          } else if (columna == 66 || columna == 98) {
                                  col = 1;
                          } else if (columna == 67 || columna == 99) {
                                  col = 2;
                          } else if (columna == 68 || columna == 100) {
                                  col = 3;
                          } else if (columna == 69 || columna == 101) {
                                  col = 4;
                          } else if (columna == 70 || columna == 102) {
                                  col = 5;
                          } else if (columna == 71 || columna == 103) {
                                  col = 6;
                          } else if (columna == 72 || columna == 104) {
                                  col = 7;
                          } else if (columna == 73 || columna == 105) {
                                  col = 8;
                          } else if (columna == 74 || columna == 106) {
                              col = 9;
                          }
                      } while (col < 0 || col >9);
                      if (fila == 1 && col == 8 || fila == 2 && col == 2 || fila == 2 && col == 4 || fila == 2 && col == 5 || fila == 2 && col == 8 || fila == 3 && col == 2 || fila == 3 && col == 8 || fila == 4 && col == 2 || fila == 5 && col == 4 || fila == 5 && col == 5 || fila == 5 && col == 6 || fila == 5 && col == 7 || fila == 8 && col == 2 || fila == 8 && col == 3 || fila == 8 && col == 4 || fila == 8 && col == 5 || fila == 8 && col == 6){
                          printf ("\n  A  B  C  D  E  F  G  H  I  J\n");
                              for (i = 0; i < ROWS; i++){
                                  count=i+1;
                                  printf("%d", count);
                                     for (j = 0; j < COLS; j++){
                                         if (i==fila && j==col){
                                             printf("[*]");
                                         }
                                         else{
                                            printf("[ ]");
                                         }
                                     }
                                 printf("\n");
                              }
                      }
                      else {
                          printf ("\n  A  B  C  D  E  F  G  H  I  J\n");
                              for (i = 0; i < ROWS; i++){
                                  count=i+1;
                                  printf("%d", count);
                                     for (j = 0; j < COLS; j++){
                                        printf("[ ]");
                                     }
                                 printf("\n");
                              }
                      }
             break;
           case 2:
              printf ("Has seleccionat dificultat: Difícil\n");
              printf ("\n  A  B  C  D  E  F  G  H  I  J\n");
                     for (i = 0; i < ROWS; i++){
                         count=i+1;
                         printf("%d", count);
                            for (j = 0; j < COLS; j++){
                               printf("[ ]");
                            }
                            printf("\n");
                         }
                      do {
                          printf("\n Introdueix la fila: ");
                          scanf("%d", &fila);
                          fila=fila-1;
                      } while (fila < 0 || fila > 9);
                     do {
                         printf("\n Introduce la columna: ");
                         scanf(" %c", &columna);
                         if (columna == 65 || columna == 98) {
                                 col = 0;
                         } else if (columna == 66 || columna == 98) {
                                 col = 1;
                         } else if (columna == 67 || columna == 99) {
                                 col = 2;
                         } else if (columna == 68 || columna == 100) {
                                 col = 3;
                         } else if (columna == 69 || columna == 101) {
                                 col = 4;
                         } else if (columna == 70 || columna == 102) {
                                 col = 5;
                         } else if (columna == 71 || columna == 103) {
                                 col = 6;
                         } else if (columna == 72 || columna == 104) {
                                 col = 7;
                         } else if (columna == 73 || columna == 105) {
                                 col = 8;
                         } else if (columna == 74 || columna == 106) {
                             col = 9;
                         }
                     } while (col < 0 || col >9);
                     if (fila == 1 && col == 8 || fila == 2 && col == 2 || fila == 2 && col == 4 || fila == 2 && col == 5 || fila == 2 && col == 8 || fila == 3 && col == 2 || fila == 3 && col == 8 || fila == 4 && col == 2 || fila == 5 && col == 4 || fila == 5 && col == 5 || fila == 5 && col == 6 || fila == 5 && col == 7 || fila == 8 && col == 2 || fila == 8 && col == 3 || fila == 8 && col == 4 || fila == 8 && col == 5 || fila == 8 && col == 6){
                         printf ("\n  A  B  C  D  E  F  G  H  I  J\n");
                             for (i = 0; i < ROWS; i++){
                                 count=i+1;
                                 printf("%d", count);
                                    for (j = 0; j < COLS; j++){
                                        if (i==fila && j==col){
                                            printf("[*]");
                                        }
                                        else{
                                           printf("[ ]");
                                        }
                                    }
                                printf("\n");
                             }
                     }
                     else {
                         printf ("\n  A  B  C  D  E  F  G  H  I  J\n");
                             for (i = 0; i < ROWS; i++){
                                 count=i+1;
                                 printf("%d", count);
                                    for (j = 0; j < COLS; j++){
                                       printf("[ ]");
                                    }
                                printf("\n");
                             }
                     }




            break;
        case 3:
            printf ("Has seleccionat dificultat: Molt complicat\n");
            printf ("\n  A  B  C  D  E  F  G  H  I  J\n");
                   for (i = 0; i < ROWS; i++){
                       count=i+1;
                       printf("%d", count);
                          for (j = 0; j < COLS; j++){
                             printf("[ ]");
                          }
                          printf("\n");
                       }
                    do {
                        printf("\n Introdueix la fila: ");
                        scanf("%d", &fila);
                        fila=fila-1;
                    } while (fila < 0 || fila > 9);
                   do {
                       printf("\n Introduce la columna: ");
                       scanf(" %c", &columna);
                       if (columna == 65 || columna == 98) {
                               col = 0;
                       } else if (columna == 66 || columna == 98) {
                               col = 1;
                       } else if (columna == 67 || columna == 99) {
                               col = 2;
                       } else if (columna == 68 || columna == 100) {
                               col = 3;
                       } else if (columna == 69 || columna == 101) {
                               col = 4;
                       } else if (columna == 70 || columna == 102) {
                               col = 5;
                       } else if (columna == 71 || columna == 103) {
                               col = 6;
                       } else if (columna == 72 || columna == 104) {
                               col = 7;
                       } else if (columna == 73 || columna == 105) {
                               col = 8;
                       } else if (columna == 74 || columna == 106) {
                           col = 9;
                       }
                   } while (col < 0 || col >9);
                   if (fila == 1 && col == 8 || fila == 2 && col == 2 || fila == 2 && col == 4 || fila == 2 && col == 5 || fila == 2 && col == 8 || fila == 3 && col == 2 || fila == 3 && col == 8 || fila == 4 && col == 2 || fila == 5 && col == 4 || fila == 5 && col == 5 || fila == 5 && col == 6 || fila == 5 && col == 7 || fila == 8 && col == 2 || fila == 8 && col == 3 || fila == 8 && col == 4 || fila == 8 && col == 5 || fila == 8 && col == 6){
                       printf ("\n  A  B  C  D  E  F  G  H  I  J\n");
                           for (i = 0; i < ROWS; i++){
                               count=i+1;
                               printf("%d", count);
                                  for (j = 0; j < COLS; j++){
                                      if (i==fila && j==col){
                                          printf("[*]");
                                      }
                                      else{
                                         printf("[ ]");
                                      }
                                  }
                              printf("\n");
                           }
                   }
                   else {
                       printf ("\n  A  B  C  D  E  F  G  H  I  J\n");
                           for (i = 0; i < ROWS; i++){
                               count=i+1;
                               printf("%d", count);
                                  for (j = 0; j < COLS; j++){
                                     printf("[ ]");
                                  }
                              printf("\n");
                           }
                   }
             break;
        default:
              printf ("Fins la propera...\n");
        }
}


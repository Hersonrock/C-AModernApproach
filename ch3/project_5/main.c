#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 64
#define DIM 4

int main(int argc, char *argv[argc +1]){
        char input[SIZE];
        int matrix[DIM][DIM];
        char *endptr;
        int rSums[DIM], cSums[DIM], dSums[2];
       
        memset(input, '\0', SIZE * sizeof(char));

        printf("Enter the numbers from 1 to 16 in any order: \n");
        fgets(input, SIZE, stdin);

        endptr = input;
        for(int i = 0; i < DIM; i++){
                matrix[i][0] = (int)strtof(endptr, &endptr);
                for(int j = 1; j < DIM; j++){
                        matrix[i][j] = (int)strtof(endptr, &endptr);
                }
        }
       
        for(int i = 0; i < DIM; i++){
                printf("%2d %2d %2d %2d\n", matrix[i][0],
                                         matrix[i][1],
                                         matrix[i][2],
                                         matrix[i][3]
                      );
        }

        for(int i = 0; i < DIM; i++){
                rSums[i] = matrix[i][0] + 
                           matrix[i][1] +
                           matrix[i][2] +
                           matrix[i][3]
                           ;
        }

        for(int i = 0; i < DIM; i++){
                cSums[i] = matrix[0][i] + 
                           matrix[1][i] +
                           matrix[2][i] +
                           matrix[3][i]
                           ;
        }

        for(int i = 0; i < 2; i++){
                dSums[i] = matrix[0][0] + 
                           matrix[1][1] +
                           matrix[2][2] +
                           matrix[3][3]
                           ;
        }


        printf("Row sums: %2d %2d %2d %2d\n", rSums[0],
                                              rSums[1],
                                              rSums[2],
                                              rSums[3]
              );

        printf("Column sums: %2d %2d %2d %2d\n", cSums[0],
                                                 cSums[1],
                                                 cSums[2],
                                                 cSums[3]
              );
        printf("Diagonal sums: %2d %2d\n", dSums[0],
                                           dSums[1]
              );
        

        return EXIT_SUCCESS;
}

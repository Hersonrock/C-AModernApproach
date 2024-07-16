#include<stdio.h>
#include<stdlib.h>
#include<errno.h>

#define ROWS 5
#define MAX_SIZE 20
int main(int argc, char *argv[]){
        char input_buffer[MAX_SIZE];
        int matrix[ROWS][ROWS] = {};

        for(size_t i = 0; i < ROWS; i++){
                char *endptr = input_buffer;
                printf("Enter row %ld: ", i);
                fgets(input_buffer, MAX_SIZE, stdin);
                for(size_t j = 0; j < ROWS; j++){
                        errno = 0;
                        matrix[i][j] = (int)strtol(endptr, &endptr, 10);
                        if(errno !=0){
                                perror("Invalid input\n");
                                return EXIT_FAILURE;
                        }
                }
        }
        
        printf("Row totals: ");
        for(size_t i = 0; i < ROWS; i++){
                int result = 0;
                for(size_t j = 0; j < ROWS; j++){
                        result += matrix[i][j];
                }
                printf("%d ", result);
        }
        printf("\n");
        printf("Column totals: ");
        for(size_t i = 0; i < ROWS; i++){
                int result = 0;
                for(size_t j = 0; j < ROWS; j++){
                        result += matrix[j][i];
                }
                printf("%d ", result);
        }
        printf("\n");




        return EXIT_SUCCESS;
}

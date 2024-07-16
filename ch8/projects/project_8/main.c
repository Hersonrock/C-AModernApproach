#include<stdio.h>
#include<stdlib.h>
#include<errno.h>

#define ROWS 5
#define MAX_SIZE 20
int main(int argc, char *argv[]){
        char input_buffer[MAX_SIZE];
        int matrix[ROWS][ROWS] = {};
        int quiz_max[ROWS] = {0};
        int quiz_min[ROWS] = {0};

        for(size_t i = 0; i < ROWS; i++){
                char *endptr = input_buffer;
                printf("Enter scores for student %ld: ", i + 1);
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
        
        printf("Per Student totals: ");
        int s_result[ROWS];
        for(size_t i = 0; i < ROWS; i++){
                s_result[i] = 0;
                for(size_t j = 0; j < ROWS; j++){
                        s_result[i] += matrix[i][j];
                }
                printf("%d ", s_result[i]);
        }
        printf("\n");

        printf("Per Student average: ");
        for(size_t i = 0; i < ROWS; i++){
                printf("%.2f ", (float)s_result[i] / (float)ROWS);
        }
        printf("\n");


        printf("Per Quiz averages: ");
        for(size_t i = 0; i < ROWS; i++){
                int result = 0;
                for(size_t j = 0; j < ROWS; j++){
                        result += matrix[j][i];
                        if(j == 0){
                                quiz_max[i] = matrix[j][i];
                                quiz_min[i] = matrix[j][i];
                                continue;
                        }
                        if(quiz_max[i] < matrix[j][i]){
                                quiz_max[i] = matrix[j][i];
                        }else if(quiz_min[i] > matrix[j][i]){
                                quiz_min[i] = matrix[j][i];
                        }
                }
                printf("%d ", result / ROWS);
        }
        printf("\n");


        printf("Per Quiz high scores: ");
        for(size_t i = 0; i < ROWS; i++){
                printf("%d ", quiz_max[i]);
        }
        printf("\n");

        printf("Per Quiz low scores: ");
        for(size_t i = 0; i < ROWS; i++){
                printf("%d ", quiz_min[i]);
        }
        printf("\n");


        return EXIT_SUCCESS;
}

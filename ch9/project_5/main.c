#include<stdio.h>
#include<stdlib.h>

#define MAX_SIZE 3
void print_magic_square(int n, int magic_square[n][n]);
void create_magic_square(int n, int magic_square[n][n]);
int main(int argc, char *argv[]){
        char input[MAX_SIZE];
        int n;

        printf("This program creates a magic square of the specified size.\n");
        printf("The size must be an odd number between 1 and 99.\n");
        printf("Enter the size of magic square: ");
        fgets(input, MAX_SIZE, stdin);
        n = atoi(input);
        int matrix[n][n];

        create_magic_square(n, matrix);

        print_magic_square(n, matrix);


        return EXIT_SUCCESS;
}
void print_magic_square(int n, int magic_square[n][n]){

        for(size_t i = 0; i < n; i++){
                for(size_t j = 0; j < n; j++){
                        printf("%2d ", magic_square[i][j]);
                        if((j + 1) % n == 0) printf("\n");
                }
        }

}
void create_magic_square(int n, int magic_square[n][n]){

        int pos_x;
        int pos_y;

         for(size_t i = 0; i < n; i++){
                for(size_t j = 0; j < n; j++){
                        magic_square[i][j] = 0;
                }
        }
        pos_x = n / 2;
        pos_y = n - 1;

        for(int val = 1 ;val <= n * n; val++){
                if(val == 1){
                        magic_square[pos_x][pos_y] = 1;
                        continue;
                }
                pos_x--;
                pos_y++;
                if(pos_x == -1 && pos_y == n){
                        pos_x = 0;
                        pos_y = n - 2;
                }
                else if(pos_x == -1) pos_x = n - 1;
                else if(pos_y == n) pos_y = 0;
                
                if(magic_square[pos_x][pos_y] != 0){
                        pos_x++;
                        pos_y -= 2;
                }

                magic_square[pos_x][pos_y] = val;
        }       
}

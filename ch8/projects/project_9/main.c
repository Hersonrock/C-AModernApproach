#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>

#define COL 21 // "._" X10 + '\n' 
#define ROW 10 // COL / 2 rounded down.
               
void clear_screen();
void print_array(char array[ROW][COL + 1]);
void init_array(char array[ROW][COL + 1]);

int main(int main, char *argv[]){
        char array[ROW][COL + 1]; //accounting for \0
        ///DEBUG
        int init_x = 0;
        int init_y = 0;
        //
        srand(time(NULL));
        while(1){
                clear_screen();
                init_array(array);
                init_x = (rand() % 10) * 2;
                init_y = (rand() % 10);
                printf("[%d, %d]\n", init_x, init_y);
                array[init_y][init_x] = 'A';
                print_array(array);
                fflush(stdout);
                sleep(1);
        }
        return EXIT_SUCCESS;
}

void clear_screen(){
        printf("\e[1;1H\e[2J");
}

void print_array(char array[ROW][COL + 1]){
        for(size_t i = 0 ; i < ROW; i++){
                printf("%s", array[i]);
        }
        printf("--------------\n");
}

void init_array(char array[ROW][COL + 1]){
        for(size_t i = 0; i < ROW; i++){
                for(size_t j = 0; j < COL - 1; j++){
                         array[i][j] = j % 2 == 0 ? '.' : ' ';
                }
                array[i][COL - 1] = '\n';
                array[i][COL] = '\0';

        }
}

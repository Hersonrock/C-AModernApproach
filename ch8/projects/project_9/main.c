#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>

#define COL 24 // '+' + "._"(X10) + '+' + '\n' + \0
#define ROW 11  
               
void clear_screen();
void print_array(char array[ROW + 1][COL + 1]);
void init_array(char array[ROW + 1][COL + 1]);
void init_boundaries(char array[ROW + 1][COL + 1]);

int main(int main, char *argv[]){
        char array[ROW + 1][COL + 1]; //accounting for \0 on column and + 2 rows
        int init_x = 0;
        int init_y = 0;
        int cur_x = 0;
        int cur_y = 0;
        int start_flag = 1;
        char letter;
        int next_step = 0;
        int cont_flags[3] = {0};
        int valid_route = 1;

        srand(time(NULL));
        while(1){
                clear_screen();
                if(start_flag){
                        init_array(array);
                        init_boundaries(array);
                        init_x = ((rand() % 10) * 2) + 2;
                        init_y = (rand() % 10) + 1;
                        cur_x = init_x;
                        cur_y = init_y;
                        letter = 65;
                        array[cur_y][cur_x] = letter;
                        start_flag = 0;
                        print_array(array);
                        fflush(stdout);
                        usleep(100*1000);
                        continue;
                }
                
                while(valid_route){
                        valid_route = 0;
                        next_step = rand() % 4;
                        switch(next_step){
                                case 0:
                                        if(array[cur_y][cur_x - 2] == '.'){
                                                cur_x -= 2;
                                                array[cur_y][cur_x] = ++letter;
                                                goto print;
                                        }else{
                                                cont_flags[0] = 1;
                                        }
                                        break;
                                case 1:
                                        if(array[cur_y + 1][cur_x] == '.'){
                                                cur_y += 1;
                                                array[cur_y][cur_x] = ++letter;
                                                goto print;
                                        }else{
                                                cont_flags[1] = 1;
                                        }
                                        break;
                                case 2:
                                        if(array[cur_y - 1][cur_x] == '.'){
                                                cur_y -= 1;
                                                array[cur_y][cur_x] = ++letter;
                                                goto print;
                                        }else{
                                                cont_flags[2] = 1;
                                        }
                                        break;
                                case 3:
                                        if(array[cur_y][cur_x + 2] == '.'){
                                                cur_x += 2;
                                                array[cur_y][cur_x] = ++letter;
                                                goto print;
                                        }else{
                                                cont_flags[3] = 1;
                                        }
                                        break;
                        }
                        for(int i = 0; i < 4; i++){
                                if(cont_flags[i] == 0){
                                        valid_route = 1;                
                                }
                        }
                }
                start_flag = 1;
                letter = 65;
print: 
                for(int i = 0; i < 4; i++){
                        cont_flags[i] = 0;
                }
                valid_route = 1;
                printf("+++++++++++++++++++++++\n");
                print_array(array);
                fflush(stdout);
                usleep(100*1000);
        }
        return EXIT_SUCCESS;
}

void clear_screen(){
        printf("\e[1;1H\e[2J");
}

void print_array(char array[ROW + 1][COL + 1]){
        for(size_t i = 0 ; i < ROW + 1; i++){
                printf("%s", array[i]);
        }
}

void init_array(char array[ROW + 1][COL + 1]){
        for(size_t i = 1; i < ROW; i++){
                for(size_t j = 1; j < COL - 2; j++){
                         array[i][j] = j % 2 != 0 ? ' ' : '.';
                }
                array[i][COL - 1] = '\n';
                array[i][COL] = '\0';

        }
}

void init_boundaries(char array[ROW + 1][COL + 1]){
        for(size_t j = 0; j < COL - 1; j++){
                array[0][j] = '+';
                array[ROW][j] = '+';
        }
        array[0][COL - 1] = '\n'; 
        array[0][COL] = '\0'; 
        array[ROW][COL - 1] = '\n'; 
        array[ROW][COL] = '\0'; 

        for(size_t i = 1; i < ROW ; i++){
                array[i][0] = '+';
                array[i][COL - 2] = '+';
        }
}

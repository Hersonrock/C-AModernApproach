#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

#define MAX_DIGITS 20
#define DIGIT_HEIGHT 3
#define DIGIT_WIDTH 4

const int segments[10][7] = {
        {1, 1, 1, 1, 1, 1, 0}, //0 
        {0, 1, 1, 0, 0, 0, 0}, //1
        {1, 1, 0, 1, 1, 0, 1}, //2
        {1, 1, 1, 1, 0, 0, 1}, //3
        {0, 1, 1, 0, 0, 1, 1}, //4
        {1, 0, 1, 1, 0, 1, 1}, //5
        {1, 0, 1, 1, 1, 1, 1}, //6
        {1, 1, 1, 0, 0, 0, 0}, //7
        {1, 1, 1, 1, 1, 1, 1}, //8
        {1, 1, 1, 1, 0, 1, 1}, //9
};
char digits[DIGIT_HEIGHT][MAX_DIGITS * DIGIT_WIDTH];

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int main(int argc, char *argv[]){
        char buff[MAX_DIGITS + 1];
        printf("Enter a number: ");
        fgets(buff, MAX_DIGITS + 1, stdin);
        char *ptr = strchr(buff, '\n');
        if(ptr != NULL) *ptr = '\0';
        char num_input[MAX_DIGITS] = {'\0'};
        for(size_t i = 0, j = 0; i < MAX_DIGITS; i++){
                if(buff[i] == '\0') break;
                if(isdigit(buff[i])){
                        num_input[j] = buff[i];
                        j++;
                }
        }
        clear_digits_array(); 
        for(size_t i = 0; i < MAX_DIGITS; i++){
                if(num_input[i] == '\0') break;
                process_digit(num_input[i] - 48, i);
        }

        print_digits_array();
                        

        return EXIT_SUCCESS;
}
void clear_digits_array(void){
        for(size_t i = 0; i < DIGIT_HEIGHT; i++){
                for(size_t j = 0; j < MAX_DIGITS * DIGIT_WIDTH; j++){
                        digits[i][j] = ' ';
                }
        }
}
void process_digit(int digit, int position){
        int index = position * 4;
        for(size_t i = 0; i < DIGIT_HEIGHT; i++){
                switch(i){
                        case 0:
                                if(segments[digit][0] == 1){
                                        digits[i][index + 1] = '_';
                                }
                                break;
                        case 1:
                                if(segments[digit][5] == 1){
                                        digits[i][index] = '|';
                                }
                                if(segments[digit][6] == 1){
                                        digits[i][index + 1] = '_';
                                }
                                if(segments[digit][1] == 1){
                                        digits[i][index + 2] = '|';
                                }
                                break;
                        case 2:
                                if(segments[digit][4] == 1){
                                        digits[i][index] = '|';
                                }
                                if(segments[digit][3] == 1){
                                        digits[i][index + 1] = '_';
                                }
                                if(segments[digit][2] == 1){
                                        digits[i][index + 2] = '|';
                                }
                                break;
                }
        }
}
void print_digits_array(void){
        
        for(size_t i = 0; i < DIGIT_HEIGHT; i++){
               for(size_t j = 0; j < MAX_DIGITS * DIGIT_WIDTH; j++){
                       printf("%c", digits[i][j]);
               }
               printf("\n");
        }
}

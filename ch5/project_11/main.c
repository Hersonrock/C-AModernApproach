#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 4
#define STR_SIZE 10
int main(int argc, char *argv[]){
        char input[SIZE];
        int number, digit[2];
        char str[2][STR_SIZE];
       
        memset(str[0], '\0', STR_SIZE);  
        memset(str[1], '\0', STR_SIZE);  
        printf("Enter a two-digit number: ");
        fgets(input, SIZE, stdin);
        number = atoi(input);
        if(number < 10 || number > 99){
                fprintf(stderr, "Invalid Number\n");
                return EXIT_FAILURE;
        }

        digit[0] = number / 10;
        digit[1] = number - digit[0] * 10;

        if(digit[0] != 1){
                switch(digit[0]){
                        case 2:
                                strcpy(str[0], "twenty");
                                break;
                        case 3:
                                strcpy(str[0], "thirty");
                                break;
                        case 4:
                                strcpy(str[0], "forty");
                                break;
                        case 5:
                                strcpy(str[0], "fifty");
                                break;
                        case 6:
                                strcpy(str[0], "sixty");
                                break;
                        case 7:
                                strcpy(str[0], "seventy");
                                break;
                        case 8:
                                strcpy(str[0], "eighty");
                                break;
                        case 9:
                                strcpy(str[0], "ninety");
                                break;

                };
                switch(digit[1]){
                        case 1:
                                strcpy(str[1], "one");
                                break;
                        case 2:
                                strcpy(str[1], "two");
                                break;
                        case 3:
                                strcpy(str[1], "three");
                                break;
                        case 4:
                                strcpy(str[1], "four");
                                break;
                        case 5:
                                strcpy(str[1], "five");
                                break;
                        case 6:
                                strcpy(str[1], "six");
                                break;
                        case 7:
                                strcpy(str[1], "seven");
                                break;
                        case 8:
                                strcpy(str[1], "eight");
                                break;
                        case 9:
                                strcpy(str[1], "nine");
                                break;

                };
                printf("You entered the number %s-%s.\n", str[0], str[1]);
        }
        else{
               switch(digit[1]){
                       case 0:
                                strcpy(str[0], "ten");
                                break;
                       case 1:
                                strcpy(str[0], "eleven");
                                break;
                        case 2:
                                strcpy(str[0], "twelve");
                                break;
                        case 3:
                                strcpy(str[0], "thirteen");
                                break;
                        case 4:
                                strcpy(str[0], "fourteen");
                                break;
                        case 5:
                                strcpy(str[0], "fifteen");
                                break;
                        case 6:
                                strcpy(str[0], "sixteen");
                                break;
                        case 7:
                                strcpy(str[0], "seventeen");
                                break;
                        case 8:
                                strcpy(str[0], "eighteen");
                                break;
                        case 9:
                                strcpy(str[0], "nineteen");
                                break;
               }
                printf("You entered the number %s.\n", str[0]);
        }




        return EXIT_SUCCESS;
}

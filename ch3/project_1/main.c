#include<stdio.h>
#include<stdlib.h>


#define SIZE 20

int main(int argc, char  *argv[argc + 1]){
        char input[SIZE];
        int day, month, year;
        char *endptr;

        printf("Enter a date: ");
        fgets(input, SIZE, stdin);

        month = (int)strtof(input, &endptr);
        endptr++;

        for(int i = 0; i < 2; i++){
                if(!i){
                        day = (int)strtof(endptr, &endptr);
                        endptr++;
                }
                else{
                        year = (int)strtof(endptr, &endptr);
                        endptr++;
                }
        }

        if(month > 12 || day > 31 || year > 9999){
                fprintf(stderr, "Invalid date\n");
                return EXIT_FAILURE;
        }

        printf("You entered the date %d%02d%02d\n", year, month, day);

        return EXIT_SUCCESS;

}

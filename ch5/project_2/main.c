#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 20
int main(int argc, char *argv[argc + 1]){
        char input[SIZE];
        int hour12, hour24, min;
        char *endptr;
        char meridiem[3];

        printf("Enter a 24-hour time: ");
        fgets(input, SIZE, stdin);
        hour24 = (int)strtol(input, &endptr, 0);
        endptr++; // skipping ':' character
        min = (int)strtol(endptr, &endptr, 0);

        if(hour24 >= 12){
                if(hour24 == 12){
                        hour12 = hour24;
                        strcpy(meridiem,"PM");
                }
                else if(hour24 == 24){
                        hour12 = 12;
                        strcpy(meridiem,"AM");
                }
                else{
                        hour12 = hour24 - 12;
                        strcpy(meridiem,"PM");
                }
        }
        else{
                hour12 = hour24;
                strcpy(meridiem,"AM");
        }

        printf("Equivalent 12-hour time: %02d:%02d %s\n", hour12, min, meridiem);


        return EXIT_SUCCESS;
}

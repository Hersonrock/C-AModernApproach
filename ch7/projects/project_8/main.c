#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

#define SIZE 20
#define MININHOUR 60
#define NFLIGHTS 8

int toMin(int hour24, int min);

int main(void){
        char input[SIZE];
        int hour, min, timeSinceMidnight;
        char *endptr;
        int times[NFLIGHTS][6] = {
                [0] = {8, 0 , 0 , 10 , 16, 0},
                [1] = {9, 43 , 0 , 11 , 52, 0},
                [2] = {11, 19, 0, 1, 31, 1},
                [3] = {12, 47, 1, 3, 0, 1},
                [4] = {2, 0, 1, 4, 8, 1},
                [5] = {3, 45, 1, 5, 55, 1},
                [6] = {7, 0, 1, 9, 20, 1},
                [7] = {9, 45, 1, 11, 58, 1}
        };
        
        int cFlight = 0;
        char meridiem[2][3] = {
                [0] = "am",
                [1] = "pm"
        };
        char input_meridiem[2] = {};
        int possibleFlight = 0;


        memset(input, '\0', SIZE);
        printf("Enter a 12-hour time(ex. 4:45PM): ");
        fgets(input, SIZE, stdin);
        hour = (int)strtol(input, &endptr, 10);
        endptr++;
        min = (int)strtol(endptr, &endptr, 10);
        while(*endptr == ' '){
                endptr++;
        }
        input_meridiem[0] = *endptr;
        input_meridiem[1] = *(endptr + 1);

        if(toupper(input_meridiem[0]) == 'A'){
                // hour remains the same
        }
        else if(toupper(input_meridiem[0]) == 'P'){
                // hour + 12
                if( hour != 12){
                        hour += 12;
                }
        }
        else{
                fprintf(stderr, "Invalid input\n");
                return EXIT_FAILURE;
        }
        
        timeSinceMidnight = toMin(hour, min);

        for(int i = 0 ; i < NFLIGHTS; i++){
                int flightTimeSinceMidnight;
                if(times[i][2] == 1 && times[i][0] != 12){
                        flightTimeSinceMidnight = toMin(times[i][0] + 12, 
                                                  times[i][1]);
                } else {
                        flightTimeSinceMidnight = toMin(times[i][0], 
                                                  times[i][1]);
                }
                if(flightTimeSinceMidnight > timeSinceMidnight){
                        cFlight = i;
                        possibleFlight = 1;
                        break;
                }
        }

        if(possibleFlight == 0){
                printf("There are no available flights today\n");
                return EXIT_SUCCESS;
        }
        printf("Closest departure time is %02d:%02d%s, arriving at %02d:%02d%s\n", 
                                                times[cFlight][0],
                                                times[cFlight][1],
                                                meridiem[times[cFlight][2]],
                                                times[cFlight][3],
                                                times[cFlight][4],
                                                meridiem[times[cFlight][5]]
                                                );
                                                
        return EXIT_SUCCESS;
                                                
}
int toMin(int hour24, int min){
        return hour24 * MININHOUR + min;
}

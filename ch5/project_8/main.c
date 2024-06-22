#include<stdio.h>
#include<stdlib.h>

#define SIZE 20
#define HOURINMIN 60
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
        
        int diff;
        int cFlight = 0;
        char meridiem[2][3] = {
                [0] = "am",
                [1] = "pm"
        };


        printf("Enter a 24-hour time: ");
        fgets(input, SIZE, stdin);
        hour = (int)strtol(input, &endptr, 10);
        endptr++;
        min = (int)strtol(endptr, NULL, 10);
        
        timeSinceMidnight = toMin(hour, min);
        printf("Time since midnight: %d minutes\n", timeSinceMidnight);

        diff = abs(timeSinceMidnight - toMin(times[0][0], times[0][1]));
        for(int i = 0 ; i < NFLIGHTS; i++){
                int currentDiff = abs(timeSinceMidnight - toMin(times[i][0],
                                        times[i][1]));
                if(currentDiff < diff){
                        diff = currentDiff;
                        cFlight = i;
                }
        }

        printf("Closest departure time is %02d:%02d%s, arriving at %02d:%02d%s\n", 
                                                times[cFlight][0],
                                                times[cFlight][1],
                                                meridiem[times[cFlight][2]],
                                                times[cFlight][3],
                                                times[cFlight][4],
                                                meridiem[times[cFlight][5]]
                                                );
                                                
                                                
}
int toMin(int hour24, int min){
        return hour24 * HOURINMIN + min;
}

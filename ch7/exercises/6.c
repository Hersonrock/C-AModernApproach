#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
        char days_in_month  = 31;
        short days_in_year = 364;
        short minutes_in_day = 24 * 60;
        int seconds_in_day = 24 * 3600;

        printf("Days in a month: %d\n", days_in_month);
        printf("Days in a year: %d\n", days_in_year);
        printf("Minutes in a day: %d\n", minutes_in_day);
        printf("Seconds in a day: %d\n", seconds_in_day);

        return EXIT_SUCCESS;
}

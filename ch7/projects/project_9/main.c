#include<stdio.h>
#include<stdlib.h>

#define MAX_SIZE 20
int main(int argc, char *argv[]){
        char buffer[MAX_SIZE];
        int time24, time12, min;
        char *endptr;

        printf("Enter a 12-hour time: ");
        fgets(buffer, MAX_SIZE, stdin);
        time12 = (int)strtol(buffer, &endptr, 10);
        endptr++; // Skipping ';' character
        min = (int)strtol(endptr, &endptr, 10);
        if(*endptr == 'P' || time12 != 12){
                time24 = time12 + 12;
        }
        
        printf("Equivalent 24-hour time: %d:%d\n", time24, min);
        

        return EXIT_SUCCESS;
}

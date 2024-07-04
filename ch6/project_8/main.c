#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 10 
int main(int argc, char *argv[]){

        char input[SIZE];
        int dmonth, dweek;
        int weekCounter = 0;

        printf("Enter number of days in a month: ");
        fgets(input, SIZE, stdin);
        dmonth = (int)strtol(input, NULL, 10); 
        memset(input, '\0', SIZE);
        printf("Enter starting day of the week (1=Sun, 7=Sat): ");
        fgets(input, SIZE, stdin);
        dweek = (int)strtol(input, NULL, 10); 

        printf("\nSu Mo Tu We Th Fr Sa\n");
        for(int i = 1; i <= dmonth; i++){
                
                if( i == 1){
                        for(int j = 1; j < dweek; j++){
                                printf("   "); 
                                weekCounter++;
                        }
                }
                printf("%02d ", i);
                weekCounter++;

                if(weekCounter == 7 ){
                        weekCounter = 0;
                        printf("\n");
                }

        }
        printf("\n");

        return EXIT_SUCCESS;
}

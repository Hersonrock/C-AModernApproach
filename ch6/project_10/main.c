#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 20
#define MAX_INPUTS 100

enum identifier {MONTH, DAY, YEAR};


int main(int argc, char *argv[]){

        char buffer[SIZE];
        int date[MAX_INPUTS][3] = {};
        char *endptr;
        int counter = 0 ;
                
        for(size_t i = 0 ; i < MAX_INPUTS; i++){
                printf("Enter the a date(mm/dd/yy): ");
                fgets(buffer, SIZE, stdin);
                date[i][MONTH] = (int)strtol(buffer, &endptr, 10);
                endptr++;
                date[i][DAY] = (int)strtol(endptr, &endptr, 10);
                endptr++;
                date[i][YEAR] = (int)strtol(endptr, NULL, 10);

                if(date[i][MONTH] || date[i][DAY] || date[i][YEAR]){
                        counter++;
                }else{
                        if(counter == 0){
                                fprintf(stderr,"No date, provided\n");
                                return EXIT_SUCCESS;
                        }
                        break;
                }
        }
        int eIndex = 0;

        for(size_t i = 1; i < counter; i++){
                if(date[i][YEAR] < date[eIndex][YEAR] ||
                  (date[i][YEAR] == date[eIndex][YEAR] && 
                   date[i][MONTH] < date[eIndex][MONTH]) || 
                  (date[i][YEAR] == date[eIndex][YEAR] &&
                   date[i][MONTH] == date[eIndex][MONTH] &&
                   date[i][DAY] < date[eIndex][DAY])){
                        eIndex = i;
                }
                                  
        }


        printf("%02d/%02d/%02d is the earliest date\n", 
                                          date[eIndex][MONTH],
                                          date[eIndex][DAY],
                                          date[eIndex][YEAR]);

        return 0;
}

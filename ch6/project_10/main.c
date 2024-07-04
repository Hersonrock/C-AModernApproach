#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 20
#define MAX_INPUTS 100

enum identifier {MONTH, DAY, YEAR};

int main(int argc, char *argv[]){

        char buffer[SIZE];
        char date[MAX_INPUTS][3] = {};
        char *endptr;
        int counter = 0 ;
        int i,j;
                
        for(size_t i = 0 ; i < MAX_INPUTS; i++){
                printf("Enter the a date(mm/dd/yy): ");
                fgets(buffer, SIZE, stdin);
                date[i][MONTH] = (int)strtol(buffer, &endptr, 10);
                endptr++;
                date[i][DAY] = (int)strtol(endptr, &endptr, 10);
                endptr++;
                date[i][YEAR] = (int)strtol(endptr, NULL, 10);
                memset(buffer, '\0', SIZE);
                counter++;

                if(!(date[i][MONTH] || date[i][DAY] || date[i][YEAR])){
                        break;
                } 
        }
        /* DEBUG
        for(size_t i = 0; i < counter; i++){
                printf("date %ld\n", i + 1);
                printf("\t%02d/%02d/%02d\n", date[i][MONTH],
                                       date[i][DAY],
                                       date[i][YEAR]);
        }
        */




        /* OLD CODE
        if(year[1] < year[2]){
               i = 1;
               j = 2;
        } else if(year[1] == year[2]){
                if(month[1] < month[2]){
                        i = 1;
                        j = 2;
                }else if(month[1] == month[2]){
                       if(day[1] < day[2]){
                                i = 1;
                                j = 2;
                       } else if(day[1] == day[2]){
                                printf("Both dates are the same\n");
                                return 1;
                       } else{
                               i = 2;
                               j = 1;
                       }
                } else { 
                        i = 2;
                        j = 1;
                }
        } else {
                i = 2;
                j = 1;
        }

        printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d\n", 
                                                        month[i], day[i], 
                                                        year[i], month[j],
                                                        day[j], year[j]);
                                                        */

        return 0;
}

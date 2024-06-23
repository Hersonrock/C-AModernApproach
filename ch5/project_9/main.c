#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 20
int main(int argc, char *argv[]){

        char input[SIZE];
        int month[2], day[2], year[2];
        char *endptr;
        int i,j;
                
        printf("Enter the first date(mm/dd/yy): ");
        fgets(input, SIZE, stdin);
        month[1] = (int)strtol(input, &endptr, 10);
        endptr++;
        day[1] = (int)strtol(endptr, &endptr, 10);
        endptr++;
        year[1] = (int)strtol(endptr, NULL, 10);

        memset(input, '\0', SIZE);
        printf("Enter the second date(mm/dd/yy): ");
        fgets(input, SIZE, stdin);
        month[2] = (int)strtol(input, &endptr, 10);
        endptr++;
        day[2] = (int)strtol(endptr, &endptr, 10);
        endptr++;
        year[2] = (int)strtol(endptr, NULL, 10);

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

        return 0;
}

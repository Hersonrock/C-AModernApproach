#include<stdio.h>
#include<stdlib.h>

#define SIZE 20
int main(int argc, char *argv[argc + 1]){
        char input[SIZE];
        int value;

        printf("Enter a number: ");
        fgets(input, SIZE, stdin);
        value = (int)strtol(input, NULL, 0);

        if(value < 0){
                value *= -1;
        }

        if(value <= 9){
                printf("The number %d has %d digit\n", value, 1);
        }
        else if(value > 9 && value <= 99){
                printf("The number %d has %d digits\n", value, 2);
        }
        else if(value > 99 && value <= 999){
                printf("The number %d has %d digits\n", value, 3);
        }
        else if(value > 999 && value <= 9999){
                printf("The number %d has %d digits\n", value, 4);
        }

        return EXIT_SUCCESS;
}

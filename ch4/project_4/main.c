#include<stdio.h>
#include<stdlib.h>

#define SIZE 6
int main(void){
        char input[SIZE];
        int i;
        int arr[SIZE - 1];
        printf("Enter a number between 0  and 32767: ");
        fgets(input , SIZE, stdin);
        i = (int)strtof(input, NULL);
        if(i < 0 || i > 32767){
                fprintf(stderr, "Invalid input\n");
                return EXIT_FAILURE;
        }

        for(int j = SIZE - 2 ; j >= 0; j--){
                arr[j] = i % 8;
                i = i / 8;
         }

        printf("In octal, your number is: %d%d%d%d%d\n", arr[0],
                                                         arr[1],
                                                         arr[2],
                                                         arr[3],
                                                         arr[4]
              ); 

        return EXIT_SUCCESS;
}

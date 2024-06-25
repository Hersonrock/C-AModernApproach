#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define SIZE 10 
int main(void){
        char input[SIZE + 1];
        int inputInt;
        int arr[SIZE] = {};
        int n = 1;

        printf("Enter a number: ");
        fgets(input , SIZE, stdin);
        inputInt = atoi(input);

        for(size_t i = 0; i < SIZE; i++){
                arr[i] = inputInt % 10;
                inputInt = inputInt / 10;
                if(inputInt == 0){
                        break;
                }
                n++;
        }

        printf("The reversal is: ");
        for(size_t i = 0; i < n; i++){
                printf("%d", arr[i]);
        }
        printf("\n");

        return EXIT_SUCCESS;
}

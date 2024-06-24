#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>
#include<math.h>

#define MAX_NUMBERS 100
#define INPUT_SIZE 10
int main(int argc, char *argv[argc + 1]){
        float nInput[MAX_NUMBERS] = {};
        char input[INPUT_SIZE];
        int nInputCounter = 0;
        float maxNum;

        printf("Enter a positive number(Enter 0 to terminate)\n");
        for(int i = 0; i < MAX_NUMBERS; i++){
                char *endptr;
                memset(input, '\0', INPUT_SIZE);
                printf("Enter a number: ");
                fgets(input, INPUT_SIZE, stdin);
                nInput[i] = strtof(input, &endptr);
                if(input == endptr){
                        fprintf(stderr, "No input, try again.\n");
                        continue;
                }
                if(nInput < 0){
                        fprintf(stderr, "Invalid input, try again.");
                        continue;
                }
                if(nInput[i] == 0){
                        printf("Number of entered numbers: %d\n", nInputCounter);
                        break;
                }
                nInputCounter++;
        }
        
        if(nInputCounter == 0){
                printf("No numbers entered\n");
                return EXIT_SUCCESS;
        }

        maxNum = nInput[0];
        for(int i = 1; i < nInputCounter; i++){
                if(maxNum < nInput[i]){
                        maxNum = nInput[i];
                        continue;
                }
        }
        
        printf("The largest number entered was: %f\n", maxNum);
        return EXIT_SUCCESS;
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

#define MAX_SIZE 11
#define TAX 0.05
#define CENT_TOLERANCE 2
int main(int argc, char *argv[argc + 1]){

        char input[MAX_SIZE];
        float amount, total;
        int dotCounter = 0;
        int dotFlag = 0;
        int endOfLine = 0;
        int tolerance = CENT_TOLERANCE; 

        memset(input, '\0', MAX_SIZE);
        printf("Enter an amount[max %d digits]: ", MAX_SIZE - 1);
        fgets(input, MAX_SIZE, stdin);
        if (input[0] == '\n' || (input[0] == '.' && input[1] == '\n')){
                fprintf(stderr, "Error, no input provided\n");
                return EXIT_FAILURE;
        }

        for(size_t i = 0; i < MAX_SIZE ; i++){
                
                if(dotFlag){
                        fprintf(stderr, "Error, more than a single '.'\n");
                        return EXIT_FAILURE;
                }

                switch(input[i]){
                        case '.':
                                dotCounter < 1 ? dotCounter++ : dotFlag++;
                                continue;
                        case '\0':
                                fprintf(stderr, "Error, input is longer than "
                                        "expected [Max: %d]\n", MAX_SIZE);
                                return EXIT_FAILURE;
                        case '\n':
                                endOfLine++;
                                break;
                        default:
                                break;
                }
                if(endOfLine){
                        break;
                }

                if(!isdigit((int)input[i])){
                        fprintf(stderr, "Error, invalid character on input\n");
                        return EXIT_FAILURE;
                }

                if(dotCounter > 0){
                        tolerance--;
                        if(tolerance < 0){
                                fprintf(stderr, "Error, fraction of cent\n");
                                return EXIT_FAILURE;
                        }
                }
        }

        amount = strtof(input, NULL);
        total = amount + amount * TAX;
        printf("With %.2f%% tax added: $%.2f\n", TAX, total);

        return EXIT_SUCCESS;
}

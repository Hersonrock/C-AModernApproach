#include<stdio.h>
#include<stdlib.h>

#define SIZE 10
int main(int argc, char *argv[argc + 1]){
        double xValue = 0;
        double output = 0;
        char input[SIZE];

        printf("Provide a value for x: ");

        fgets(input, SIZE, stdin);
        xValue = strtof(input, NULL);


        output = ((((3 * xValue + 2) *
                         xValue - 5) *
                         xValue - 1) *
                         xValue + 7) *
                         xValue - 6;

        printf("Result: %.2f\n", output);

        return EXIT_SUCCESS;

}

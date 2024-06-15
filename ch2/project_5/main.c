#include<stdio.h>
#include<stdlib.h>


#define SIZE 10
float myPow(float in, int exp){
        float result = 1;

        for(int i = 1; i <= exp ; i++){
                result *= in;
        }

        return result;
}

int main(int argc, char *argv[argc + 1]){
        float xValue;
        float output;
        char input[SIZE];

        printf("Provide a value for x: ");

        fgets(input, SIZE, stdin);
        xValue = strtof(input, NULL);


        
        output = 3.0f * myPow(xValue, 5) + 
                2.0f * myPow(xValue, 4) -
                5.0f * myPow(xValue, 3) -
                1.0f * myPow(xValue, 2) +
                7.0f * xValue - 
                6.0f;

        printf("Result: %.2f\n", output);
        return EXIT_SUCCESS;

}

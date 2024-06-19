#include<stdio.h>
#include<stdlib.h>

#define SIZE 12
#define ARRAY_SIZE 4
int main(int argc, char *argv[argc + 1]){
        
        char input[SIZE];
        int numbers[ARRAY_SIZE];
        char *endptr;
        int largest, smallest;

        endptr = input;

        printf("Enter four integrers: ");
        fgets(input, SIZE, stdin);
        for(size_t i = 0; i < ARRAY_SIZE; i++){

               numbers[i] = (int)strtol(endptr, &endptr, 0);
        }
        largest = smallest = numbers[0];

        for(size_t i = 0; i < ARRAY_SIZE; i++){
                if(numbers[i] > largest){
                        largest = numbers[i];
                }
        }

        for(size_t i = 0; i < ARRAY_SIZE; i++){
                if(numbers[i] < smallest){
                        smallest = numbers[i];
                }
        }

        printf("Largest: %d\n", largest);
        printf("Smallest: %d\n", smallest);

        return EXIT_SUCCESS;
}

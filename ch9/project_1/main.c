#include<stdio.h>
#include<stdlib.h>

#define MAX_INPUT 100
#define N_NUM 7
void selection_sort(int in_array[], size_t size);
int main(int argc, char *argv[]){
        char input[MAX_INPUT];
        int numbers[N_NUM];
        char *ptr;

        printf("Provide %d numbers to sort(i.e 3 6 32 1 0): ", N_NUM);
        fgets(input, MAX_INPUT, stdin);
        ptr = input;
        for(size_t i = 0; i < N_NUM; i++){
                numbers[i] = (int)strtol(ptr, &ptr, 10);
                ptr++; // skiping space
        }
        
        selection_sort(numbers, N_NUM);

        for(size_t i = 0; i < N_NUM; i++){
                printf("numbers[%ld]= %d\n", i, numbers[i]);
        }

        


        return EXIT_SUCCESS;
}
void selection_sort(int in_array[], size_t size){

        int max = in_array[0];
        size_t pos = 0;
        for(size_t i = 1; i < size; i++){
                if(in_array[i] > max){
                       max = in_array[i]; 
                       pos = i;
                }
        }

        for(size_t i = pos; i < size - 1; i++){
                in_array[i] = in_array[i + 1];
        }
        in_array[size - 1] = max;
        if(size > 1){
                selection_sort(in_array, size - 1);
        }
        
}

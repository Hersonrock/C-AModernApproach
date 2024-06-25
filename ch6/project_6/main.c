#include<stdio.h>
#include<stdlib.h>

#define SIZE 10
#define RSIZE 20
int main(int argc, char *argv[]){
        char input[SIZE + 1];
        int n;
        int results[RSIZE] = {};
        size_t i = 1;
        size_t j = 0;
        long tmp = 0;


        printf("Enter a number: ");
        fgets(input, SIZE, stdin);
        n = atoi(input);

        while(1){
                tmp =  i * i; 
                if(tmp > n) break;
                if(tmp % 2 == 0){
                        results[j] = tmp;
                        j++;
                }
                i++;
        }

        for(size_t i = 0; i < j; i++){
                printf("%d\n", results[i]);
        }
        return EXIT_SUCCESS;
}

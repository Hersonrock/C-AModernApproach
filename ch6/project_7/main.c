#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
        int n, odd, square;
        
        printf("This program prints a table of squares.\n");
        printf("Enter number of entries in table: ");
        scanf("%d", &n);

        odd = 3;
        for(int i = 1, square = 1; i <= n; odd += 2, ++i){
                printf("%10d%10d\n", i, square);
                square += odd;
        }

        return EXIT_SUCCESS;
}

#include<stdio.h>
#include<stdlib.h>

int main(void){
        int a, b, c;
        printf("Enter a three-digit number: ");
        scanf("%1d%1d%1d", &c, &b, &a);
        printf("The reversal is: %d%d%d\n", a, b, c);
        return EXIT_SUCCESS;
}

/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* square2.c (Chapter 6, page 110) */
/* Prints a table of squares using a for statement */

#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 20
int main(void)
{
        int i; 
        char input[MAX_SIZE];
        int n;
        short counter = 0;

        printf("This program prints a table of squares.\n");
        printf("Enter number of entries in table: ");
        fgets(input, MAX_SIZE, stdin);
        n = atoi(input);

        for(i = 1; i <= n; i++, counter++){
                if(counter == 24){
                        while(1){
                                printf("Press Enter to continue...");
                                char c = fgetc(stdin);
                                if(c == '\xA'){
                                        break;
                                }
                        }
                        counter = 0;
                }
                printf("%10d%10d\n", i, i * i);
        }

        return 0;
}

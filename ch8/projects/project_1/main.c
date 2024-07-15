/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* repdigit.c (Chapter 8, page 166) */
/* Checks numbers for repeated digits */

#include <stdbool.h>   /* C99 only */
#include <stdio.h>

#define SIZE 10
int main(void)
{
        bool digit_seen[SIZE] = {false};
        int repeated_digits[SIZE] = {};
        int digit;
        long n;
        int i = 0;

        printf("Enter a number: ");
        scanf("%ld", &n);

        while (n > 0) {
                digit = n % 10;
                n /= 10;
                if (digit_seen[digit]){
                        repeated_digits[i] = digit;
                        i++;
                        continue;
                }
                digit_seen[digit] = true;
        }

        if (i > 0){
                printf("Repeated digit(s): ");
                for(size_t j = 0; j < SIZE;j++){
                        if(repeated_digits[j] == 0) break;
                        printf(" %d", repeated_digits[j]);
                }
                printf("\n");
        }
        else
                printf("No repeated digit\n");

        return 0;
}

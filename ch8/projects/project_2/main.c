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
        int digit_seen[SIZE] = {};
        int digit;
        long n;

        printf("Enter a number: ");
        scanf("%ld", &n);

        while (n > 0) {
                digit = n % 10;
                n /= 10;
                digit_seen[digit] += 1;
        }

        printf("Digit:       ");
        for(size_t j = 0; j < SIZE;j++){
                printf(" %ld", j);
        }
        printf("\n");
        printf("Occurrences: ");
        for(size_t j = 0; j < SIZE;j++){
                printf(" %d", digit_seen[j]);
        }
        printf("\n");

        return 0;
}

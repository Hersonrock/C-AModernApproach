/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* sum2.c (Chapter 7, page 131) */
/* Sums a series of numbers (using long variables) */

#include <stdio.h>

int main(void)
{
        double n, sum = 0;

        printf("This program sums a series of integers.\n");
        printf("Enter integers (0 to terminate): ");

        scanf("%lf", &n);
        while (n != 0) {
                sum += n;
                scanf("%lf", &n);
        }
        printf("The sum is: %lf\n", sum);

        return 0;
}

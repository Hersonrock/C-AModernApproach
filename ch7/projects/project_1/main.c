/* square2.c (Chapter 6, page 110) */
/* Prints a table of squares using a for statement */

#include <stdio.h>

int main(void)
{
        long i, n;

        printf("This program prints a table of squares.\n");
        printf("Enter number of entries in table: ");
        scanf("%ld", &n);

        //for int the bytes used are 4, so the max value unsinged int can hold is
        //2^32, now signed int will hold 2^31. This means that the smallest value
        //which will break this loop is 2^round(31/2)
        //Respectively this can be calculated for short(2 bytes) and long(8 bytes)
        for (i = n - 100; i <= n; i++)
                printf("%20ld%20ld\n", i, i * i);
        //Strangely though when i is a short and I do i * i, it is converted
        //automatically to int :(

        return 0;
}

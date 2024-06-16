#include <stdio.h>


int main()
{
        int i = 8;
        int j = 5;
        printf("(i%%j) = %d\n", i % j);
        printf("(-i%%j) = %d\n", -i % j);
        printf("(i%%-j) = %d\n", i % -j);
        printf("(-i%%-j) = %d\n", -i % -j);


        /*I'm getting the same answers regardless of being compiled with 
          -std=89 or -std=99
          (i%j) = 3  
          (-i%j) = -3
          (i%-j) = 3
          (-i%-j) = -3
        */
        return 0;
}

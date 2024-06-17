#include<stdio.h>

int main(void){
        int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, ck,
            first_sum, second_sum, total;
        int calculatedCk;
        printf("Enter the 12 digits of an UPC: ");
        scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2,
                                                   &i3, &i4, &i5,
                                                   &j1, &j2, &j3,
                                                   &j4, &j5, &ck
                        );
        
        first_sum = d + i2 + i4 + j1 + j3 + j5;
        second_sum = i1 + i3 + i5 + j2 + j4;
        total = 3 * first_sum + second_sum;
        calculatedCk =  9 - ((total - 1) % 10);

        printf("Calculated check digit: %d\n", calculatedCk);
        printf("Provided check digit: %d\n", ck);

        if(ck == calculatedCk){
                printf("UPC : %s\n", "VALID");
        }
        else{
                printf("UPC : %s\n", "NOT VALID");
        }
        
        return 0;
}

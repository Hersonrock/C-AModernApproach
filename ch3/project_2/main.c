#include<stdio.h>
#include<stdlib.h>

#define SIZE 20
int main(int argc, char *argv[argc + 1]){
        int itemNumber;
        float unitPrice;
        char itemInput[SIZE];
        char unitInput[SIZE];
        char date[SIZE];

        printf("Enter item number: ");
        fgets(itemInput, SIZE, stdin);
        itemNumber = (int)strtof(itemInput,NULL);

        printf("Enter unit price: ");
        fgets(unitInput, SIZE, stdin);
        unitPrice = strtof(unitInput,NULL);
        if(unitPrice > 9999.99f){
                fprintf(stderr, "Unit price must be below $9999.99\n");
                return EXIT_FAILURE;
        }

        printf("Enter purchase date (mm/dd/yyyy): ");
        fgets(date, SIZE, stdin);
        
        printf("%-15s\t%-15s\t%-15s\n", "Item", "UnitPrice", "PurchaseDate");
        printf("%-15d\t$%10.2f\t%-15s\n", itemNumber, unitPrice, date);
        

        return EXIT_SUCCESS;

}

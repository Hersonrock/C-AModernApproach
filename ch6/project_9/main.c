#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 10
#define MAX_PAYMENTS 100
int main(int argc, char *argv[argc + 1]){
        char buffer[SIZE];
        double payments[MAX_PAYMENTS] = {};
        double balance[MAX_PAYMENTS] = {};
        double amount, rate, monthlyInterest;
        int nPayments;

        printf("Enter amount of loan: ");
        fgets(buffer, SIZE, stdin);
        amount = strtof(buffer, NULL);
        memset(buffer, '\0', SIZE);

        printf("Enter interest rate: ");
        fgets(buffer, SIZE, stdin);
        rate = strtof(buffer, NULL);
        memset(buffer, '\0', SIZE);

        printf("Enter number of payments: ");
        fgets(buffer, SIZE, stdin);
        nPayments = (int)strtol(buffer, NULL, 10);
        memset(buffer, '\0', SIZE);

        monthlyInterest = (amount * (rate / 100.0f)) / 12.0f;
        for(size_t i = 0 ; i < nPayments ; i++){
                printf("Enter monthly payment #%ld: ", i + 1);
                fgets(buffer, SIZE, stdin);
                payments[i] = strtof(buffer, NULL);
                memset(buffer, '\0', SIZE);
                balance[i] = amount - payments[i] + monthlyInterest;
                amount = balance[i];
        }

        
        for(size_t i = 0 ; i < nPayments ; i++){
                printf("Balance remaining after payment #%ld: %.2f\n",
                                i + 1,
                                balance[i]);
        }
        return EXIT_SUCCESS;

}

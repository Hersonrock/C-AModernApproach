#include<stdio.h>
#include<stdlib.h>

#define SIZE 10
int main(int argc, char *argv[argc + 1]){
        char loanAmount[SIZE];
        char interestRate[SIZE];
        char mPayment[SIZE];
        float balance1, balance2, balance3;
        float amount, rate, payment, monthlyInterest;

        printf("Enter amount of loan: ");
        fgets(loanAmount, SIZE, stdin);
        amount = strtof(loanAmount, NULL);

        printf("Enter interest rate: ");
        fgets(interestRate, SIZE, stdin);
        rate = strtof(interestRate, NULL);

        printf("Enter monthly payment: ");
        fgets(mPayment, SIZE, stdin);
        payment = strtof(mPayment, NULL);

        monthlyInterest = (amount * (rate / 100.0f)) / 12.0f;

        balance1 = amount - payment + monthlyInterest;
        amount = balance1;
        balance2 = amount - payment + monthlyInterest;
        amount = balance2;
        balance3 = amount - payment + monthlyInterest;
        amount = balance3;

        
        printf("Balance remaining after frist payment: %.2f\n", balance1);
        printf("Balance remaining after second payment: %.2f\n", balance2);
        printf("Balance remaining after third payment: %.2f\n", balance3);

        return EXIT_SUCCESS;

}

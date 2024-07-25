#include<stdio.h>
#include<stdlib.h>

#define SIZE 20
float get_taxdue(float income);
int main(int argc, char *argv[argc + 1]){
        
        char input[SIZE];
        float income, due;
         
        printf("Enter Income: ");
        fgets(input, SIZE, stdin);
        income = strtof(input, NULL);
       
        due = get_taxdue(income);

        printf("Tax due: %.2f\n", due);

        return EXIT_SUCCESS;
}
float get_taxdue(float income){

        float due;

        if(income < 750.0f){due = income * 0.01f;}
        else if(income < 2250.0f){due = 7.50f + (income - 750.0f) * 0.02f;}
        else if(income < 3750.0f){due = 37.50f + (income - 2250.0f) * 0.03f;}
        else if(income < 5250.0f){due = 82.50f + (income - 3750.0f) * 0.04f;}
        else if(income < 7000.0f){due = 142.50f + (income - 5250.0f) * 0.05f;}
        else if(income >= 7000.0f){due = 230.00f + (income - 7000.0f) * 0.06f;}

        return due;
}

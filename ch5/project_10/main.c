#include<stdio.h>
#include<stdlib.h>

#define SIZE 4
int main(int argc, char *argv[]){
        char input[SIZE];
        int grade;
        char lGrade;
        
        printf("Enter numerical grade: ");
        fgets(input, SIZE, stdin);
        grade = atoi(input);
        
        if(grade < 0 || grade > 100){
                fprintf(stderr, "Invalid grade\n");
                return EXIT_FAILURE;
        }
        
        grade /= 10;

        switch(grade){
                case 9:
                case 10:
                        lGrade = 'A';
                        break;
                case 8:
                        lGrade = 'B';
                        break;
                case 7:
                        lGrade = 'C';
                        break;
                case 6: 
                        lGrade = 'D';
                        break;
                default:
                       lGrade = 'F';
                       break;
        }

        printf("Letter grade: %c\n", lGrade);


        return EXIT_SUCCESS;
}

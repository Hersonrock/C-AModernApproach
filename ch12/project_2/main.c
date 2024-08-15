#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

#define MAX 100
int main(int argc, char *argv[]){
        char buff[MAX] = {'\0'};
        char *new_line;
        printf("Enter a message: ");
        fgets(buff, MAX, stdin);
        new_line = strchr(buff, '\n');
        if(new_line != NULL) *new_line = '\0';

        for(size_t  i = MAX - 1, j = 0;;){
                while(!isalpha(buff[i])) {
                        if(i > 0) i--;
                }
                while(!isalpha(buff[j])){
                        if(j < MAX - 1) j++;
                }
                if(j > i || i == 0 || j == MAX - 1 ) break;
                if(toupper(buff[i]) != toupper(buff[j])){
                        printf("Not a Palindrome\n");
                        return EXIT_SUCCESS;
                }
                if(i == j) break;
                i--;
                j++;
        }
        printf("Palindrome\n");
        

        return EXIT_SUCCESS;
}

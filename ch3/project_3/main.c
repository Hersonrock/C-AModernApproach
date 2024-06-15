#include<stdio.h>
#include<stdlib.h>


#define SIZE 20

int main(int argc, char  *argv[argc + 1]){
        char input[SIZE];
        int gs1, group, code, item, chkDigit;
        char *endptr;

        printf("Enter ISBN: ");
        fgets(input, SIZE, stdin);

        gs1 = (int)strtof(input, &endptr);
        endptr++;

        for(int i = 0; i < 4; i++){
                switch(i){
                        case 0:
                                group = (int)strtof(endptr, &endptr);
                                endptr++;
                                break;
                        case 1:
                                code = (int)strtof(endptr, &endptr);
                                endptr++;
                                break;
                        case 2:
                                item = (int)strtof(endptr, &endptr);
                                endptr++;
                                break;
                        case 3:
                                chkDigit = (int)strtof(endptr, &endptr);
                                endptr++;
                                break;
                }
        }

        printf("GS1 prefix: %d\n", gs1);
        printf("Group Identifier: %d\n", group);
        printf("Publisher code: %d\n", code);
        printf("Item number: %d\n", item);
        printf("Check digit: %d\n", chkDigit);

        return EXIT_SUCCESS;

}

#include<stdio.h>
#include<stdlib.h>

#define PI 3.141592
#define MAX_SIZE 4

int main(int argc, char *argv[argc + 1]){

        float radius;
        float volume;
        char input[MAX_SIZE];

        printf("What's the sphere radius?(1-99): ");
        if(!fgets(input, MAX_SIZE, stdin)){
                fprintf(stderr, "Error, invalid input\n");
                return EXIT_FAILURE;
                
        }
        
        radius = strtod(input, NULL);
        if(radius <= 99 && radius > 0){
                volume = (4.0f/3.0f) * PI * radius * radius * radius;
                printf("A sphere with radius %.2fm"
                                " has volume %.2fm^3 \n", 
                                radius,
                                volume
                      );
                return EXIT_SUCCESS;

        }
        else{
                fprintf(stderr,"Error, radius has to be between 1-99\n");
                return EXIT_FAILURE;
        }
        
}

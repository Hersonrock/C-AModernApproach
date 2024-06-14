#include<stdio.h>
#include<stdlib.h>

#define PI 3.141592

int main(int argc, char *argv[argc + 1]){

        float radius = 10.0f;
        float volume = (4.0f/3.0f) * PI * radius * radius * radius;

        printf("A sphere with radius %.2fm has volume %.2fm^3 \n", radius,
                        volume
                        );
        
        return EXIT_SUCCESS;
}

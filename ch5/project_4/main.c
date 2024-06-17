#include<stdio.h>
#include<stdlib.h>
/*
 * Speed(knots) Description
 * Less than 1  Calm
 * 1-3  Light air
 * 4-7  Breeze
 * 28-47        Gale
 * 48-63        Storm
 * Above 63     Hurricane
 */
#define SIZE 20
int main(int argc, char *argv[argc + 1]){
        
        char input[SIZE];
        float speed;
        int n = 0;
        char description[6][10] = {
                "Calm",
                "Light air",
                "Breeze",
                "Gale",
                "Storm",
                "Hurricane"
        };
       
        printf("Enter wind speed(kn): ");
        fgets(input, SIZE, stdin);
        speed = strtof(input, NULL);

        if(speed < 1.0f){n = 0;}
        else if(speed >= 1.0f  && speed <= 3.0f){n = 1;}
        else if(speed >= 4.0f  && speed <= 27.0f){n = 2;}
        else if(speed >= 28.0f  && speed <= 47.0f){n = 3;}
        else if(speed >= 48.0f  && speed <= 63.0f){n = 4;}
        else if(speed > 63.0f){n = 5;}

        printf("Speed entered: %.2f kn\n", speed);
        printf("Description: %s\n", description[n]);


        return EXIT_SUCCESS;
}

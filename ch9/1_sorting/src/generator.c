#include"../include/fileio.h"
#include <time.h>

int randGen(){
        
	int *numbers = (int *)malloc(sizeof(int) * NUM_INTS);
	srand(time(NULL));

	for(size_t i = 0; i < NUM_INTS ; i++){
                int value = rand() % (int)pow(10, NUM_DIGITS); 
		numbers[i] = value;
                if(value % 2 == 0) {
                        numbers[i] *= -1;
                }
	}
        
        writeIn(numbers, IN_PATH);
	free(numbers);	

        return EXIT_SUCCESS;
}

#include "../include/fileio.h"

int testIncrementalOrder(char *path){
        int *evaluatedArray;

        evaluatedArray = (int *)malloc(sizeof(int) * NUM_INTS);
        memset(evaluatedArray, 0 , sizeof(int) * NUM_INTS);

        writeArray(path, evaluatedArray);

        for(size_t i = 0 ; i < NUM_INTS - 1; i++){
                int factor = evaluatedArray[i + 1] - evaluatedArray[i];
                if(factor < 0)
                {
                        printf("Array is not sorted in Ascending Order\n");
                        return EXIT_FAILURE;
                }
        }
        
        printf("Array is sorted in Ascending Order\n");
        

        free(evaluatedArray);
       
        return EXIT_SUCCESS;
}

int testDecreasingOrder(char *path){
        int *evaluatedArray;

        evaluatedArray = (int *)malloc(sizeof(int) * NUM_INTS);
        memset(evaluatedArray, 0 , sizeof(int) * NUM_INTS);

        writeArray(path, evaluatedArray);

        for(size_t i = 0 ; i < NUM_INTS - 1; i++){
                int factor =  evaluatedArray[i] - evaluatedArray[i + 1];
                if(factor < 0)
                {
                        printf("Array is not sorted in Decreasing Order\n");
                        return EXIT_FAILURE;
                }
        }
        
        printf("Array is sorted in Decreasing Order\n");
        

        free(evaluatedArray);
       
        return EXIT_SUCCESS;
}

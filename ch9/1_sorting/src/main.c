#include "../include/fileio.h"
#include "../include/test.h"
#include "../include/quick_bari.h"

int main(int argc, char *argv[argc + 1]){

        int *array = (int *)malloc(sizeof(int) * NUM_INTS + 1);

        //randGen();
        writeArray(IN_PATH, array);
        array[NUM_INTS] = MAX_VALUE;

        quickSortBari(array, 0, NUM_INTS);

        writeIn(array, OUT_PATH);

        testIncrementalOrder(OUT_PATH);

        testDecreasingOrder(OUT_PATH);

        free(array);

        return EXIT_SUCCESS;
}

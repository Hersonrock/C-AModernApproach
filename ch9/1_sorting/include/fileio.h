#ifndef FILE_IO
#define FILE_IO

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<sys/types.h>
#include<math.h>
#include<errno.h>

#define NUM_INTS 7
#define MAX_VALUE 99999 
#define NUM_DIGITS 2 
#define MAX_FILE_SIZE (NUM_DIGITS + 2) * NUM_INTS // + (sign)(comma)
#define OUT_PATH "./output_sorted.csv"
#define IN_PATH "./input_raw.csv"

int writeIn(int *inputArray, char *path);
int randGen();
int writeArray(char *path, int *outputArray);

#endif // FILE_IO

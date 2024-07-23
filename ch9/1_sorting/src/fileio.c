#include "../include/fileio.h"

FILE *openFile(char *path,char *mode){

        FILE *fd;

        fd = fopen(path, mode);
        if(fd == NULL){
                perror("Error opening output file.\n");
                _Exit(-1);
        }

        return fd;

}

void readFile(char *buffer, size_t size, size_t nmemb, char *path){
        
        char *mode = "r";
        FILE *fd;
        fd = openFile(path, mode); 

        fread(buffer, size, nmemb, fd);
        //int readItems = fread(buffer, size, nmemb, fd);
        //printf("readItems = %d\n", readItems);
        if ( feof(fd) == 0 ){ // ignored if the whole file is read
                if ( ferror(fd) != 0){
                        printf("Error reached when reading file\n");
                        _Exit(-1);
                }
                printf("Error reading File, EOF not reached\n");
                printf("File is bigger than expected\n");
                _Exit(-1);
        }
        fclose(fd);
}

int writeIn(int *inputArray, char *path){
        
        FILE *fd;
        char *mode = "w";
       
        fd = openFile(path, mode);

        //Creating csv file with line break before EOF
        for(size_t i = 0; i < NUM_INTS; i++){
                fprintf(fd, "%d", inputArray[i]);
                (i != NUM_INTS - 1) ? fprintf(fd, ",") : fprintf(fd, "\n");
        }
        
        fclose(fd);

        return EXIT_SUCCESS;
} 

int writeArray(char *path, int *outputArray){

        char *buffer = (char *)malloc(MAX_FILE_SIZE * sizeof(char));

        memset(buffer, '\0', MAX_FILE_SIZE * sizeof(char)); //Initializing buffer 
        readFile(buffer, 1, MAX_FILE_SIZE * sizeof(char) , path); 


        char *endptr = buffer;
        
        
        for( size_t i = 0; i < NUM_INTS; i++){
                errno = 0;
                outputArray[i] = strtod(endptr, &endptr); 
                endptr++;
                if(errno !=0){
                        perror("Error reading into int\n");
                        return EXIT_FAILURE;
                }
        }

        free(buffer);

        return EXIT_SUCCESS;
}

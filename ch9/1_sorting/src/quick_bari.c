#include"../include/fileio.h"

void swap(int *array, size_t a, size_t b){
        int temp = array[a];

        array[a] = array[b];
        array[b] = temp;
}
size_t partition(int *array, size_t low, size_t high){

        int pivot = array[low]; 
        size_t i = low; 
        size_t j = high;

        while(i < j){
                while(array[++i] <= pivot);
                while(array[--j] > pivot);
                //swap 
                if(i < j){
                        swap(array, i, j);
                }
        }
        swap(array, low, j);

        return j;
}

void quickSortBari(int *array, size_t low, size_t high){
        if(low < high){
                size_t j = partition(array, low, high);
                quickSortBari(array, low, j);
                quickSortBari(array, j + 1 , high);
        } 
}

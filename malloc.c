#include <stdio.h>
#include <malloc.h>

int main() {
    int *dynamicArray;
    static int size = 5;

    dynamicArray = (int *) malloc(size * sizeof(int));
    for (int i = 0; i < size; ++i) {
        dynamicArray[i] = i;
    }

    for (int i = 0; i < size; ++i) {
        printf("[%d]: %d\n", i, dynamicArray[i]);
    }

    return 0;
}
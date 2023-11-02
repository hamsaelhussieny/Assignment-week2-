#include <stdio.h>



int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    int *ptr = intArray; 

    
    int arraySize = sizeof(intArray) / sizeof(intArray[0]);

    printf("Printing array elements using a pointer:\n");

    for (int i = 0; i < arraySize; i++) {
        printf("%d ", *ptr); 
        ptr++; 
    }

    printf("\n");

    return 0;
}
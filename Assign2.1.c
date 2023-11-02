#include <stdio.h>




int increment(int x) {
    return x + 1;
}

int main() {
    int (*func_ptr)(int); 
    func_ptr = increment; 

    int value = 5; 

    
    int result = func_ptr(value);

    printf("Original value: %d\n", value);
    printf("Incremented value: %d\n", result);

    return 0;
}

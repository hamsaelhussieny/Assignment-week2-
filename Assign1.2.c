


#include <stdio.h>

int main() {
	
    int hexValue = 0x12AB34;
    int *ptr = &hexValue;
	
	
    printf("*ptr++ = 0x%X\n",*ptr++ ); 
    printf("*++ptr = 0x%X\n", *++ptr); 
    printf("++*ptr = 0x%X\n", ++*ptr);

    printf("Explanation:\n");
    printf("*ptr++: Post-increment means that the pointer is first dereferenced, so it prints the original value pointed to (0x12AB34), and then the pointer is incremented to the next integer-sized memory location.\n");
    printf("*++ptr: Pre-increment means that the pointer is first incremented to the next memory location, and then it's dereferenced, so it prints the value at the new memory location (0x0, which is uninitialized memory, as we moved past the end of the variable).\n");
    printf("++*ptr: Pre-increment means that the value pointed to by the pointer is first incremented, so it increments 0x0 to 0x1, and then it's dereferenced to print the updated value (0x1).\n");

	 
    return 0;
}
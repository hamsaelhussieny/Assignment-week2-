#include <stdio.h>

int main() {
    int x = 10;
    char y = 'A';
    long long z = 10000000000LL;

    int *p1 = &x;
    char *p2 = &y;
    long long *p3 = &z;
	
    printf("p1 (int) before increment: %p\n", p1);
    printf("p2 (char) before increment: %p\n", p2);
    printf("p3 (long long) before increment: %p\n", p3);

    p1++; 
    p2++; 
    p3++; 

    printf("p1 (int) after increment: %p\n", p1);
    printf("p2 (char) after increment: %p\n", p2);
    printf("p3 (long long) after increment: %p\n", p3);

    printf("Explanation:\n");
    printf("p1 (int): When you increment an int pointer, it moves to the next int-sized memory location. So, it is incremented by the size of an int.\n");
    printf("p2 (char): When you increment a char pointer, it moves to the next char-sized memory location. So, it is incremented by the size of a char.\n");
    printf("p3 (long long): When you increment a long long pointer, it moves to the next long long-sized memory location. So, it is incremented by the size of a long long.\n");

    return 0;
}
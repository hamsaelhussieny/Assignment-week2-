#include <stdio.h>




extern int externVar;

void autoExample() {
    auto int a = 10; 
    printf("auto variable 'a': scope - local, initial value - garbage, lifetime - function, access - within the function\n");
}

void externExample() {
    extern int externVar; 
    printf("extern variable 'externVar': scope - global, initial value - 0 (implicitly initialized), lifetime - program, access - global\n");
}

void staticExample() {
    static int s = 20; 
    printf("static variable 's': scope - local, initial value - 0 (implicitly initialized), lifetime - program, access - within the function\n");
    s++;
    printf("static variable 's' after increment: %d\n", s);
}

void registerExample() {
    register int r = 30; 
    printf("register variable 'r': scope - local, initial value - garbage, lifetime - function, access - within the function\n");
    r++;
    printf("register variable 'r' after increment: %d\n", r);
}

int main() {
    autoExample();
    externExample();
    staticExample();
    registerExample();

    return 0;
}

int externVar = 42; 
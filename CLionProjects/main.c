#include <stdio.h>
#include <float.h>

int main() {
    printf("Hello, World!%d\n", sizeof(int));
    printf("Minimum float positive value: %E\n", FLT_MIN );

    extern int d = 3, f = 5;    // declaration of d and f. -> compiler can proceed without requiring complete detail of var
    int f = 3, f = 5;           // definition and initializing d and f. -> defined only at comp-time; needs to be defined again at link time

    //Ivalue -> expression referring to a memory location (vars)
    //rvalue -> data value stored at some address in memory (right)




    return 0;
}
#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

// variable of type int 

int main(void) {
    register int i = 0;

    printf("Size of i (int): %zu bytes / %zu bits\n", sizeof i, sizeof i *8);
    printf("Size of i: %d\n", i);

    return 0;
}
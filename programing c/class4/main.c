#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

// variable of type float

int main(void) {
    float f = 40.334309;

    printf("Size of f (float): %zu bytes / %zu bits\n", sizeof f, sizeof f *8);
    printf("Size of f: %f\n", 10 / 3);

    return 0;
}

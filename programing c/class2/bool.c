#include <stdio.h>
#include <stdbool.h>

int main(void){
    bool b;

    //b = true;
    b = false;

    printf("Size of b (bool) = %lu\n", sizeof b);

    printf("Value of b = %i\n", b);
    return 0;
}
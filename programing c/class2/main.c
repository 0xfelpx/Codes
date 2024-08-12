#include <stdio.h>

int main(void) {
    char c;

    printf("Size of c (char) is: %lu bytes / %lu bits\n",sizeof c, sizeof c *8);

    c = 10;
    c = 0xa;
    c = '\n';
    printf("Value of c = %i\n", c);

    return 0;
}
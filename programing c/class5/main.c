#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

int main(void) {
	long int c[3];

	printf("The size of c is: %zu\n", sizeof c);
    printf("The numbers of elemnts of c is: %zu\n", sizeof c / sizeof c[0]);

	c[0] = 'A';
	c[1] = 0x42;
	c[2] = 67;

	printf("The elements 0 of c is: %c\n", c[0]);
    printf("The elements 1 of c is: %c\n", c[1]);
    printf("The elements 2 of c is: %c\n", c[2]);

	printf("The address of array c in memory: %p\n", c);
    printf("The address of array &c in memory %p\n", &c);
	printf("The address of first element of array c in memory: %p\n", &c[0]);
    printf("The address of second element of array c in memory: %p\n", &c[1]);

	return 0;
}

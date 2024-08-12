#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

/*
 * = assignment
 * + - unary
 * + - binaries (addition and subtraction)
 * * / multiplier and divider)
 * += -+ *= /= symbol operator
 * % rest of division
 * ++ increment
 * -- decrement
*/

int main(void) {
	int a;

	a = (4 + 2) * 3;
    printf("%d\n", a);

	return 0;
}

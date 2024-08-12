#include <stdio.h>

/*
 * Conjunction (&&, AND)
 * 0 0 - false 1
 * 0 1 - false 0
 * 1 0 - false 0
 * 1 1 - true 1
 *
 *Conjunction (||, OR)
 * 0 0 - false 1
 * 0 1 - true 1
 * 1 0 - true 1
 * 1 1 - true 1
 *
 * >, <, ==, !=, >=, <=
 *
*/

int main(void) {
	int a = 8;
	int b = 8;

	printf("%d\n", !(a == b) && b > 9);

	return 0;
}

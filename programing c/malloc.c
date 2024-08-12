#include <stdio.h>
#include <stdlib.h>

int* arrayPtr;
arrayPtr = (int *)malloc(10 * sizeof(int));
free( arrayPtr);
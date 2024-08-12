#include <stdarg.h>
#include <stdio.h>

typedef struct
{
    unsigned int dim;
    float *element;
}vec;

extern const vec VEC_UNDEFINED;

/**
 * 
*/
vec allocate(unsigned int dim);

/**
 * 
*/
vec constructDefaultVector(unsigned int dim, float val);

/**
 * 
*/
vec constructEmptVector(unsigned int dim);

/**
 * 
*/

vec newVector(unsigned int numArgs, ...);

#endif
#include <stdio.h>
#include "fun.h"

#ifndef DEBUG
#   define DEBUG 0
#endif

int main()
{
    printf("Hello world!\n");
    printf("2^3 = %f\n", cube(2));
    printf("DEBUG = %d\n", DEBUG);
    
    // This will generate an error (C++ style comments in C89)
    
    return 0;
}

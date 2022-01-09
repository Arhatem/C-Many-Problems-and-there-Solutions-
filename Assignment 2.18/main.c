#include <stdio.h>
#include <stdlib.h>
#include "max_xor.h"

int main()
{
    int x = 5, y=3;
    int *xptr = &x;
    int *yptr = &y;
    int c =xptr-yptr;
    printf("%d", c);
    return 0;
}

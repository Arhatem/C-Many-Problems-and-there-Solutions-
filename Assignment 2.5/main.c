#include <stdio.h>
#include <stdlib.h>
#include "even_or_odd.h"
int main()
{
    printf("enter any number\n");
    int x;
    scanf("%d" , &x);
    printf("%d" , even_or_odd(x));
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include "countHoles.h"

int main()
{
    printf("Enter any number\n");
    int x;
    scanf("%d", &x);
    printf("Number of holes = %d", countHoles(x));
    return 0;
}

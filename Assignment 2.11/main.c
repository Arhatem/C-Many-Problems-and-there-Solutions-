#include <stdio.h>
#include <stdlib.h>
#include "2power.h"

int main()
{
    printf("Enter number\n");
    int x;
    scanf("%d", &x);
    printf("%d" ,power_of_3(x));
    return 0;
}

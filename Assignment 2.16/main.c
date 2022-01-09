#include <stdio.h>
#include <stdlib.h>
#include "count_1s.h"
int main()
{
    unsigned char b;
    printf("Enter binary number!\n");
    scanf("%i",&b);
    unsigned char d = count_1s(b);
    printf("Reverse = %d", d);
    return 0;
}

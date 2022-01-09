#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r =0;
    for(int i =1; i< 101 ; i++)
        r+=i;
    printf("sum of first 100 integers = %d", r);
    return 0;
}

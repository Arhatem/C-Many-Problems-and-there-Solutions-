#include <stdio.h>
#include <stdlib.h>
#include "Swap_arrays.h"

int main()
{
    int a[]={5, 7 , 9 , 6, 6 ,5 , 8};
    int b[]={75, 67 , 79 , 46, 26 ,59 , 80};
    swap1(7, a, 7 ,b);

    for (int i = 0; i<7; i++)
    {
        printf("%d, ",a[i] );
    }
    printf("\n ");

    for (int i = 0; i<7; i++)
    {
        printf("%d, ",b[i] );
    }
    return 0;
}

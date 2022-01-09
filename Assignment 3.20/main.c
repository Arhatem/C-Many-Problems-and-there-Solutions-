#include <stdio.h>
#include <stdlib.h>
#include "A20.h"
int main()
{
    int l = 69, u = 70;
    if (l>=u)
    {
    int arr[2];
    int* ptr = return_array(l , u, arr);
    printf("%d\n", arr[0]);
    printf("%d\n", arr[1]);
    }
    else
    {
    int arr[u-l];
    int* ptr = return_array(l , u, arr);
    for(int i = 0; i<u-l; i++)
        {
            printf("%d\n", arr[i]);
        }
    }

    return 0;
}

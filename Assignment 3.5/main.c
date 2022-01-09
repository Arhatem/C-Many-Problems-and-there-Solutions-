#include <stdio.h>
#include <stdlib.h>
#include "Linear_search_algorithm.h"

int main()
{
    int arr[] = {64, 34, 25, 22, 22, 22, 90};
    int x =linear_search_algorithm(arr, 7, 22);
    printf("%d", x);
    return 0;
}

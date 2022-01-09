#include <stdio.h>
#include <stdlib.h>
#include "Selection_sort.h"
int main()
{
    int arr[] = {64, 34, 25, 25, 22, 10, 90};
    printf("%d \n", sizeof(arr)/sizeof(arr[0]));
    selectoin_sort(arr, 7);
    printf("Sorted array: \n");
    printArray(arr, 7);
    return 0;
}

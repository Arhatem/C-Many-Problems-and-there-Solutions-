#include <stdio.h>
#include <stdlib.h>
#include "bubble_sort.h"

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    printf("%d \n", sizeof(arr)/sizeof(arr[0]));
    bubble_sort(arr, 7);
    printf("Sorted array: \n");
    printArray(arr, 7);
    return 0;
}

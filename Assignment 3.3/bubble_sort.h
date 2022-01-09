#ifndef BUBBLE_SORT_H_INCLUDED
#define BUBBLE_SORT_H_INCLUDED
void swap (int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
}

int * bubble_sort(int s1 [], int n)
{
    for (int i= 0; i<n-1; i++)
    {
        for (int j= 0; j<n-1-i; j++)
        {
            if (s1[j]>s1[j+1])
                swap(&s1[j], &s1[j+1]);
        }
    }
    return s1;
}



#endif // BUBBLE_SORT_H_INCLUDED

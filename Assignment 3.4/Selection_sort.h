#ifndef SELECTION_SORT_H_INCLUDED
#define SELECTION_SORT_H_INCLUDED
int * selectoin_sort(int s1[], int n)
{
    for (int i= 0; i<n-1; i++)
    {
        int m =s1[i];
        int ii=i;
        for (int j= i+1; j<n-1; j++)
        {
            if (s1[j]<m)
            {
                m= s1[j];
                ii = j;
            }

        }
        swap(&s1[ii], &s1[i]);
    }
}


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


#endif // SELECTION_SORT_H_INCLUDED

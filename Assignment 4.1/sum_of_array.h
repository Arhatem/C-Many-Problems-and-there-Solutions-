#ifndef SUM_OF_ARRAY_H_INCLUDED
#define SUM_OF_ARRAY_H_INCLUDED
int * sum_array(int* arr, int n)
{
    int summ = 0;
    for (int i=0;i<n; i++)
        summ = summ + *(arr+i);
    printf("%d", summ);
}



#endif // SUM_OF_ARRAY_H_INCLUDED

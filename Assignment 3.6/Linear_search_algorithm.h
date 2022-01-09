#ifndef LINEAR_SEARCH_ALGORITHM_H_INCLUDED
#define LINEAR_SEARCH_ALGORITHM_H_INCLUDED
int Linear_search_algorithm(int arr [], int n)
{
    int o =0;
    for (int i =0; i<n; i++)
    {
        if (arr[i]==arr[n-1])
            o++;
    }
    printf("Occurrence of last element= %d", o);
}



#endif // LINEAR_SEARCH_ALGORITHM_H_INCLUDED

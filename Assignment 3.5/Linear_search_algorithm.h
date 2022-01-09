#ifndef LINEAR_SEARCH_ALGORITHM_H_INCLUDED
#define LINEAR_SEARCH_ALGORITHM_H_INCLUDED

int linear_search_algorithm(int s1 [], int n, int x)
{
    for (int i = n; i > 0; i--)
    {
        if (s1[i] == x )
        {
            return i;
        }
    }
    return -1;
}


#endif // LINEAR_SEARCH_ALGORITHM_H_INCLUDED

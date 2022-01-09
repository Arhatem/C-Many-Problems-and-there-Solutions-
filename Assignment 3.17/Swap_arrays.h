#ifndef SWAP_ARRAYS_H_INCLUDED
#define SWAP_ARRAYS_H_INCLUDED
void swap1(int a_size, int a[], int b_size, int b[])
{
    int temp[a_size];
    for (int i = 0; i<a_size; i++)
    {
        temp[i]= a[i];
        a[i]= b[i];
        b[i]= temp[i];
    }

}



#endif // SWAP_ARRAYS_H_INCLUDED

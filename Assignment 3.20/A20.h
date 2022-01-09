#ifndef A20_H_INCLUDED
#define A20_H_INCLUDED
int* return_array( int l, int u, int arr[])
{

    if (l>=u)
    {
        arr[0]= 255;
        arr[1]= 255 ;
        return arr;
    }
    else
    {
        for(int i = 0; i<(u-l)-1; i++)
        {
            arr[i]= l+i+1;
            //printf("%d\n", arr[i]);
        }
        return arr;
    }
}



#endif // A20_H_INCLUDED

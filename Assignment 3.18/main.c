#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[] ={1,2,2,3,3,3,3,4,4,4,4,4,4,3};
    int c =1, b=1;
    for (int i =0; i<14; i++)
    {
        if (array[i] == array[i+1])
        {
            c++;
        }

        else
        {
            if (c> b)
                b =c;
                c=1;
        }

    }
    printf("%d",b);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include "Copy.h"

int main()
{
    int y[10];
    int x[] = {1,2,3,4,5,6,7,8,9,10};
    for(int i =0; i<10; i++)
    {
       *(y+i) = *(x+i);
    }
    for(int i =0; i<10; i++)
    {
        printf ("%d\n",*(y+i) );
    }



    //Assignment 4.3
    /*
    int x[10];
    for(int i =1; i<=10; i++)
    {
        printf ("Enter the %d number:\n",i );
        scanf("%d", &x[i]);
    }
    for(int i =10; i>0; i--)
    {
        printf ("%d\n",*(x+i) );
    }
    */
    return 0;
}

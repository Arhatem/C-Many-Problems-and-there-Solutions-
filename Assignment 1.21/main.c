#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter the size of pyramid\n");
    int n;
    scanf("%d",&n);
    for (int i = 0; i<=n/2; i++)
    {
        for (int j=0; j<i; j++)
            printf(" ");
        printf("*");

        for (int j=n-2*i; j>0; j--)
            printf(" ");
        printf("*");

        printf("\n");
    }
    for (int i = n/2; i>=0; i--)
    {
        for (int j=i; j>0; j--)
            printf(" ");
        printf("*");

        for (int j=n-2*i; j>0; j--)
            printf(" ");
        printf("*");

        printf("\n");
    }
           // for (int m=0; m<(2*i-1); m++)
    return 0;
}

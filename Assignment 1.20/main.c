#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter the size of pyramid\n");
    int n;
    scanf("%d",&n);
    for (int i = 1; i<=n; i++)
    {
        for (int j=n-i; j>0; j--)
            printf(" ");
        for (int m=0; m<(2*i-1); m++)
            printf("*");
        printf("\n");
    }
    return 0;
}

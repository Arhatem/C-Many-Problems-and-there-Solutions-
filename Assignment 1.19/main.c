#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter the size of pyramid\n");
    int n;
    scanf("%d",&n);
    for (int i = 0; i<=n; i++)
    {
        for (int j=n-i; j>=0; j--)
            printf("*");
        printf("\n");
    }
    return 0;
}

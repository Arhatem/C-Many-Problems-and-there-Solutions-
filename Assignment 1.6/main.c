#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x , y;
    printf("Enter the two numbers\n");
    scanf("%d %d" , &x ,&y);
    if (x>y)
        printf("not equal, %d is bigger\n" , x);
    if (x<y)
        printf("not equal, %d is bigger\n" , y);
    if (x==y)
        printf("equal\n");
    return 0;
}

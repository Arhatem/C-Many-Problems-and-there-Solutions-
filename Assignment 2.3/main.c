#include <stdio.h>
#include <stdlib.h>
#include "op.h"
int main()
{
    printf("Enter 2 numbers and operation\n");
    int x , y;
    char c;
    scanf("%d %d %c", &x, &y, &c);
    printf("%f" ,op(x, y ,c));
    return 0;
}

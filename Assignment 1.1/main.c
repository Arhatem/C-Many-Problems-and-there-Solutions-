#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;
    printf("Please insert two integers:");
    scanf(" %d %d", &num1, &num2 );
    printf("Result = %d \n", (num1+num2)*3-10);
    return 0;
}

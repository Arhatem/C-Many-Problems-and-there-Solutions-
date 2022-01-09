#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter the radius\n");
    float r;
    scanf("%f" ,&r);
    printf("Area = %f pie and circumference = %f pie" , r*r ,2*r);
    return 0;
}

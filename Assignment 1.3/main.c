#include <stdio.h>
#include <stdlib.h>

int main()
{
    float temp;
    printf("Enter temp in Celsius\n");
    scanf("%f" ,&temp);
    printf("Fahrenheit Temp = %f", (temp*9/5)+32);
    return 0;
}

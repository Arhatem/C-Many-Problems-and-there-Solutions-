#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c[] = "hello";
    int n = 1;
    int i =0;
    while(c[i] != '\0')
    {
        n++;
        i++;
    }
    printf("n= %d" ,n );
    return 0;
}

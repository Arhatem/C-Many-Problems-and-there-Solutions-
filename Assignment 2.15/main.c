#include <stdio.h>
#include <stdlib.h>
#include "reverse_binary.h"
int main(int argv, char* argc[])
{
    unsigned char b;
    printf("Enter binary number!\n");
    scanf("%d",&b);
    unsigned char d = reverse_binary(b);
    //printBits(sizeof(b), &d);
    printf("Reverse = %d", reverse_binary(b));

    return 0;
}

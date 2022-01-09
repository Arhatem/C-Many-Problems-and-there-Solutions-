#include <stdio.h>
#include <stdlib.h>


int main()
{
    char name[30];
    int age;
    printf("Enter your name and age\n");
    scanf("%s %d" , &name, &age);
    printf("Your name is: %s and your age is: %d\n", name, age);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("Enter two numbers\n");
    int x, y;
    scanf("%d %d",&x, &y);
    printf("Enter the operation\n");
    char op;
    scanf(" %c" ,&op); // must put space before char c as if we don't the space will be the character
    switch (op)
    {
        case '+':
        printf("Result = %d" , x + y);
        break ;
        case '-':
        printf("Result = %d" , x - y);
        break ;
        case '*':
        printf("Result = %d" , x * y);
        break ;
        case '/':
        printf("Result = %f" , (float)x / y);
        break ;
        default :
        printf("Wrong operation" );
        break ;
    }
    return 0;
}

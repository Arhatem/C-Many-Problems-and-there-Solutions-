#ifndef FIBONACCI_H_INCLUDED
#define FIBONACCI_H_INCLUDED
void fibonacci(int n)
{
    int num1=1, num2=1;
    int num3=0;

    for (int i=2; i<n; i++)
    {
        num3=num1+num2;
        num1=num2;
        num2=num3;
    }
    printf("%d",num3);

}



#endif // FIBONACCI_H_INCLUDED

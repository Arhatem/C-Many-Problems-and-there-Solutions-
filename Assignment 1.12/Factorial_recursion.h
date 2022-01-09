#ifndef FACTORIAL_RECURSION_H_INCLUDED
#define FACTORIAL_RECURSION_H_INCLUDED
int factorial(int x)
{
    if (x==1)
        return x;
    else
        return x*factorial(x-1);
}


#endif // FACTORIAL_RECURSION_H_INCLUDED

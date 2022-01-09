#ifndef OP_H_INCLUDED
#define OP_H_INCLUDED
float op(int x, int y, char c )
{
    switch (c)
    {
        case '+':
            return x+y;
            break;
        case '-':
            return x-y;
            break;
        case '*':
            return x*y;
            break;
        case '/':
            return x/(float)y;
            break;
        default:
            printf("Error");
    }

}


#endif // OP_H_INCLUDED

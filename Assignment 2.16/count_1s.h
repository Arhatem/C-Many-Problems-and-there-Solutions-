#ifndef COUNT_1S_H_INCLUDED
#define COUNT_1S_H_INCLUDED

unsigned char count_1s(unsigned char b)
{
    unsigned char a=0;

    for (int i=0; i<=7; i++)
    {
        unsigned char c;
        c = b & (1<<i);
        if (c!= 0)
            a++;
    }
    return a;
}

#endif // COUNT_1S_H_INCLUDED

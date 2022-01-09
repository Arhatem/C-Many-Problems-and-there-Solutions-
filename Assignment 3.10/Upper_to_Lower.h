#ifndef UPPER_TO_LOWER_H_INCLUDED
#define UPPER_TO_LOWER_H_INCLUDED
#include "string.h"
void upper_to_lower(char c [])
{
    for (int i =0; i<= strlen(c); i++)
    {
        if (c[i] >= 65 && c[i] <= 90)
            c[i]+=32;
    }
    for (int i =0; i<= strlen(c); i++)
    {
        printf("%c", c[i]);
    }
}



#endif // UPPER_TO_LOWER_H_INCLUDED

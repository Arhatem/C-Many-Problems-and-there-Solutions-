#ifndef DISTNICT_H_INCLUDED
#define DISTNICT_H_INCLUDED
#include <stdbool.h>

bool distinct(char s1[])
{
    bool flag = true;
    for(int i=0; i<strlen(s1); i++)
    {
        for(int j=i+1; j<strlen(s1);j++)
        {
          if (s1[i]== s1[j])
            {
            flag = false;
            break;
            }
        }

    }
    return flag;

}


#endif // DISTNICT_H_INCLUDED

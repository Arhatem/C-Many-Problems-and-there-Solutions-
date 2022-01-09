#ifndef POWER_H_INCLUDED
#define POWER_H_INCLUDED
int power_of_3(int x)
{
    int r=0;
    while((r=0)||(x!=3))
    {
        r=x%3;
        x/=3;
        if (r==1)
            break;
    }

    return r;
}


#endif // 2POWER_H_INCLUDED

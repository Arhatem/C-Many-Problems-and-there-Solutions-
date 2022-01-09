#ifndef COUNTHOLES_H_INCLUDED
#define COUNTHOLES_H_INCLUDED
int countHoles(int x)
{
    int no = 0;
    while ((float)x/10 !=0)
    {
        int r = x % 10;
        if ((r==0) || (r==4)||(r==6)||(r==9))
            no++;
        else if (r==8)
            no+=2;
        x/=10;

    }
    return no;
}


#endif // COUNTHOLES_H_INCLUDED

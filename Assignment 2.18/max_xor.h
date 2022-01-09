#ifndef MAX_XOR_H_INCLUDED
#define MAX_XOR_H_INCLUDED
int max_xor (int x, int y)
{
    int maximum = 0;

        for (int i=0; i<=y-x; i++)
        {
            for (int j =i; j<=(y-x); j++)
            {
                int n = (x+i)^(x+j);
                maximum = (n > maximum)? n : maximum;
            }
        }

    return maximum;

}


#endif // MAX_XOR_H_INCLUDED

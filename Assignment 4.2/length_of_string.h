#ifndef LENGTH_OF_STRING_H_INCLUDED
#define LENGTH_OF_STRING_H_INCLUDED

void string_length(char *arr)
{
    int len =0;
    while (*arr != '\0')
    {
        len ++;
        arr++ ;
    }
    printf("%d", len);
}



#endif // LENGTH_OF_STRING_H_INCLUDED

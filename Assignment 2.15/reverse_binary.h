#ifndef REVERSE_BINARY_H_INCLUDED
#define REVERSE_BINARY_H_INCLUDED
unsigned char reverse_binary(unsigned char b)
{
    unsigned char a =0b00000000;

    for (int i=0; i<=3; i++)
    {
        unsigned char c;
        c = b & (1<<i);
        c = c << 7-(2*i);
        a = a | c;
    }
    for (int i=4; i<=7; i++)
    {
        unsigned char c;
        c = b & (1<<i);
        c = c >> 2*i-7;
        a = a | c;
    }
    return a;
}
void printBits(size_t const size, void const * const ptr)
{
    unsigned char *b = (unsigned char*) ptr;
    unsigned char byte;
    int i, j;

    for (i = size-1; i >= 0; i--) {
        for (j = 7; j >= 0; j--) {
            byte = (b[i] >> j) & 1;
            printf("%u", byte);
        }
    }
    puts("");
}




#endif // REVERSE_BINARY_H_INCLUDED

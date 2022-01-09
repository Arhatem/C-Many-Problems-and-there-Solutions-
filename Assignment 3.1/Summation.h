#ifndef SUMMATION_H_INCLUDED
#define SUMMATION_H_INCLUDED
int summation (int numbers_size, int* numbers)
{
    int sum =0;
    for (int i =0; i<numbers_size; i++)
    {
        sum+=*numbers;
        numbers++;
    }
    return sum;
}




#endif // SUMMATION_H_INCLUDED

#include <stdio.h>
int main()
{
    unsigned int input, temp;
    scanf("%u", &input);
    int size = 0, counter = 0, max = 0;
    temp = input;
    while (temp > 0)
    {
        size++;
        temp /= 2;
    }
    temp = input;
    int binary_list[size];
    for (int i = 0; i < size; i++)
    {
        binary_list[i] = temp % 2;
        temp /= 2;
    }
    for (int i = 0; i < size; i++)
    {
        if (binary_list[i] == 1)
        {
            counter++;
            if (counter > max)
            {
                max = counter;
            }
        }
        else
        {
            counter = 0;
        }
    }
    printf("%d", max);
}
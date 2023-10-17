#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int n;
    char list[10] = {'0', 'x', 'a', 'b', 'c', 'd', '1', '2', '3', '4'};
    char temp_l[4];

    for (int i = 2; i < 10; i++)
    {
        if (list[i] >= 'a' && list[i] <= 'z')
        {
            list[i] = list[i] - 'a' + 10;
        }
        else
        {
            list[i] = list[i] - '0';
        }
        /*
        for (int j = 0; j < 4; j++)
        {
            temp_l[j] = list[i] % 2;
            list[i] /= 2;
        }
        for (int j = 4; j < 0; j--)
        {
            printf("%d", temp_l[j]);
        }
        */
        printf("%d", list[2]);
    }
}
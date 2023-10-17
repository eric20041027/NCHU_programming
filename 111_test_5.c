#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int n, count_a = 0, count_b = 0, flag = 1;
    scanf("%d", &n);
    int list[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &list[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (list[i] == 1)
        {
            count_a++;
        }
        else
        {
            count_b++;
        }
    }
    // printf("%d %d", count_a, count_b);
    if (count_a % 2 == 0 || count_a % 11 == 0)
    {
        if (count_a % 2 == 0)
        {
            for (int i = 0; i < count_a; i++)
            {
                printf("1");
            }
            for (int i = 0; i < count_b; i++)
            {
                printf("0");
            }
        }
        else
        {
            if (n >= (count_a * 2) - 1)
            {
                for (int i = 0; i < n; i++)
                {
                    if (i % 2 == 0 && count_a > 0)
                    {
                        printf("1");
                        count_a--;
                    }
                    else
                    {
                        printf("0");
                    }
                }
            }
            else
            {
                printf("-1");
            }
        }
    }
    else
    {
        printf("-1");
    }
}
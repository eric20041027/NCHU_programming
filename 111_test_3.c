#include <stdio.h>
#include <stdlib.h>

int main()
{
    int len, benefit = 0;
    scanf("%d", &len);
    int price[len];
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &price[i]);
    }

    for (int i = 0; i < len - 1; i++)
    {
        if (price[i] < price[i + 1])
        {
            benefit += (price[i + 1] - price[i]) * 1000;
        }
    }
    printf("%d",benefit);
}
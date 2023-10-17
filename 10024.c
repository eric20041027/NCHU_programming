#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int n;
    int gap = 0, ans = 0, temp = 0, counter = 0;
    scanf("%d", &n);
    bool depend = true;
    int list[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &list[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            temp = 0;
            counter = 0;
            for (int k = i; k <= j; k++)
            {
                temp += list[k];
                counter++;
            }
            depend = false;
            if (temp % counter == 0)
            {
                for (int k = i; k <= j; k++)
                {
                    if (list[k] == (temp / counter))
                    {
                        depend = true;
                    }
                }
            }
            if (depend == true)
            {
                ans++;
            }
        }
    }
    printf("%d", ans);
}

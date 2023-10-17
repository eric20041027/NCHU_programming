#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, result;
    scanf("%d", &n);
    if (n >= 50 && n <= 60)
    {
        result = 100;
    }
    else if (45 <= n && n <= 49)
    {
        result = 90;
    }
    else if (40 <= n && n <= 44)
    {
        result = 80;
    }
    else if (35 <= n && n <= 39)
    {
        result = 70;
    }
    else if (30 <= n && n <= 34)
    {
        result = 60;
    }
    else if (0 <= n && n <= 29)
    {
        result = 0;
    }
    /*
    switch (n)
    {
    else if (n >= 50 && n <= 60):
        result = 100;
        break;
    else if (45 <= n && n <= 49):
        result = 90;
        break;
    else if (40 <= n && n <= 44):
        result = 80;
        break;
    else if (35 <= n && n <= 39):
        result = 70;
        break;
    else if (30 <= n && n <= 34):
        result = 60;
        break;
    else if (0 <= n && n <= 29):
        result = 0;
        break;
    default:
        break;
    }
    */

    printf("%d", result);
}
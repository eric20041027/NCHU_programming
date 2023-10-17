#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, result;
    scanf("%d", &n);
    if (n % 4 != 0)
    {
        result = 0;
    }
    else if (n % 4 == 0 && n % 100 != 0)
    {
        result = 1;
    }
    else if (n % 100 == 0 && n % 400 != 0)
    {
        result = 0;
    }
    else if (n % 4 == 0)
    {
        result = 1;
    }
    if (result == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
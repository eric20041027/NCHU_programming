#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, c = 0;
    char move;
    scanf("%d\n", &n);
    while (n--)
    {
        scanf("%c", &move);
        if (move == 'R')
        {
            c++;
        }
        else
        {
            c--;
        }
    }
    printf("%d", c);
    return 0;
}

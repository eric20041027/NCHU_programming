/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long n;
    int odd = 0, even = 0;
    int i = 0, result;
    scanf("%lld", &n);
    while (n > 0)
    {
        if (i % 2 == 0)
        {
            odd += n % 10;
            n -= n % 10;
            n /= 10;
            i++;
        }
        else
        {
            even += n % 10;
            n -= n % 10;
            n /= 10;
            i++;
        }
    }
    result = even - odd;
    printf("%d", result);
}*/
// 偶位數和減奇位數和

#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long input;
    int odd = 0, even = 0;
    int size = 0;
    scanf("%lld", &input);

    long long temp = input;
    while (temp != 0)
    {
        size++;
        temp /= 10;
    }

    int nums[size];
    temp = input;
    for (int i = size - 1; i >= 0; i--)
    {
        nums[i] = temp % 10;
        temp /= 10;
    }
    for (int i = 0; i < size; i += 2)
    {
        odd += nums[i];
    }
    for (int i = 1; i < size; i += 2)
    {
        even += nums[i];
    }
    printf("%d", even - odd);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main()
{   
    long long n;
    long long k;
    scanf("%lld", &n);
    long long temp = n;
    int time = 1, len = 0;

    while (temp > 0)
    {
        k = pow(10, time);
        temp -= temp % k;
        time++;
        len++;
    }
    float list[len];
    time = 1;
    temp = n;
    for (int i = 0; i < len; i++)
    {
        k = pow(10, time);
        list[len - i - 1] = (temp % k) / pow(10, time - 1);
        temp -= temp % k;
        time++;
    }

    bool depend = false;
    int check=0;

    if (len % 2 == 0)
    {
        for (int i = 0; i < len / 2; i++)
        {
            if (list[len - i - 1] > list[i])
            {
                depend = true;
            }
            if(list[len - i - 1] == list[i]){
                check++;
            }
            if(check == len/2){
                depend = true;
            }
        }
        if (depend == true)
        {
            list[len / 2 - 1] += 1;
        }

        for (int i = 0; i < len / 2; i++)
        {
            list[len - i - 1] = list[i];
        }
    }
    else
    {
        for (int i = 0; i < len / 2; i++)
        {
            if (list[len - i - 1] > list[i])
            {
                depend = true;
            }
            if(list[len - i - 1] == list[i]){
                check++;
            }
            if(check == len/2){
                depend = true;
            }
        }
        if (depend == true)
        {
            list[(len / 2)] += 1;
        }

        for (int i = 0; i < len / 2; i++)
        {
            list[len - i - 1] = list[i];
        }
    }

    for (int i = 0; i < len; i++)
    {
        printf("%.0f", list[i]);
    }
}
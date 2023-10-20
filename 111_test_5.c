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
     printf("1=%d 0=%d", count_a, count_b);
     int temp = count_a;

     if(count_a <= (count_a + count_b)/2+1){
        for(int i =0;i<count_a+count_b;i++){
            if(count_a%2 ==0){
                if(temp>0){
                    printf("1");
                    temp--;}
                else{
                    
                }
            }
            else{
                for(int i = 0;i<count_a + count_b;i++){
                    if(i%2==0 && temp >0){
                        printf("1");
                        temp--;
                    }
                    else{
                        printf("0");
                    }
                }
            }

        }
     }
     else{
        printf("-1");
     }
    
}
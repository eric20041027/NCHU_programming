#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    unsigned int  list[n];
    int flag_min,flag_max;
    for(int i=0;i<n;i++){
        scanf("%u",&list[i]);
    }
    
    for (int i=0; i<n-1; i++) {
        for (int j=0; j<n-i-1; j++) {
            if (list[j] > list[j+1]) {
                int temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
            }
        }
    }
    printf("%d %d\n",list[n-2],list[1]);
    float total = 0;
    for(int i=0;i<n;i++){
        total += list[i];
    }
    printf("%.2f",total/n);

}
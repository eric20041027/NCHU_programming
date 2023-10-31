#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    unsigned int n,total = 0;
    int time,temp;
    scanf("%x",&n);
    scanf("%d",&time);
    int list[32];
    temp = n;
    //printf("%d",n);
    for(int i = 0;i<32;i++){
        list[i] = temp%2;
        temp /= 2;
    }

    for(int i = 0;i<32;i++){
        printf("%d",list[i]);
    }
    printf("\n");

    for(int j = 0;j<time;j++){
        if(list[0] == 1){
            for(int i=0;i<31;i++){
                list[i] = list[i+1];
            }
            list[31] = 1;
        }
        else{
            for(int i=0;i<31;i++){
                list[i] = list[i+1];
            }
            list[31] = 0;
        }
    }
    
    for(int i = 0;i<32;i++){
        printf("%d",list[i]);
    }
    printf("\n");

    for(int i=0;i<32;i++){
        total += list[i]*pow(2,i);
    }

        printf("%#x",total);
}
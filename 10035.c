#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,temp;
    scanf("%d",&n);
    int list[n];
    for(int i=0;i<n;i++){
        scanf("%d",&list[i]);
    }

    for(int i=0;i<n;i++){
        for(int j = 0;j<n-i-1;j++){
            if(list[j] > list[j+1]){
                temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",list[i]);
    }
}
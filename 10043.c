#include<stdio.h>
#include<stdlib.h>

void sort(int list[],int n,int k){
    int temp = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(list[j] > list[j+1]){
                temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
            }
        }
    }
    printf("%d",list[n-k]);
}

int main(){
    int n;
    scanf("%d",&n);
    int list[n];
    for(int i=0;i<n;i++){
        scanf("%d",&list[i]);
    }
    int k;
    scanf("%d",&k);
    sort(list,n,k);
}
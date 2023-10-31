#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr_ori[n+1],arr_new[n+1];
    arr_ori[0] = 1;
    arr_ori[1] = 1;
    for(int i = 2;i<n+1;i++){
        arr_ori[i] = arr_ori[i-2] + arr_ori[i-1];
    }
    for(int i = 0;i<n;i++){
        arr_new[i] = arr_ori[i] * arr_ori[i+1];
    }
    printf("%d",arr_new[n-1]);
    /*
    for(int i = 0;i<n+1;i++){
        printf("%d",arr_ori[i]);
    }*/

}
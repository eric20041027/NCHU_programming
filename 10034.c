#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>

int main(){
    int n;
    scanf("%d",&n);
    char list[n];
    scanf("%s",list);
    for(int i=0;i<n;i++){
        printf("%c",list[i]);
    }
}
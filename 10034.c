#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>

int main(){
    int n,combo = 0,result = 0;
    bool judge = true;
    scanf("%d",&n);
    char list[n];
    scanf("%s",list);
    for(int i=0;i<n;i++){
        if(list[i] == 'O'){
            combo++;
        }
        else{
            combo = 0;
        }
        result += combo;
        //printf("%c",list[i]);
    }
    printf("%d",result);
}
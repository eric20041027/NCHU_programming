#include<stdio.h>
#include<math.h>

int main(){
    unsigned int n;
    scanf("%x",&n);
    int list[32] = {0};
    int i = 0;
    for(int i = 32 - 1;i >= 0;i--){
        list[i] = n%2;
        n /= 2;
    }
    for(int i = 0;i < 32;i++){
        if(list[i] == 1){
            printf("%c",'*');
        }
        else{
            printf("%c",'-');
        }
    }
}
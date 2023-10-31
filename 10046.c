#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

bool check_repeated(int n){
    int list[n],temp = n,digit = 0;
    bool check = false;

    do{
        temp /= 10;
        digit++;
    }while(temp > 0);

    for(int i=0;i<digit;i++){
        list[i] = n%10;
        n /= 10;
    }
    
    for(int i=0;i<digit;i++){
        for(int j=0;j<digit;j++){
            if(i != j){
                if(list[i] == list[j]){
                    //printf("i = %d j = %d repeated\n",i,j);
                    check = true;
                }
            }
        }
    }
    return check;
}

int main(){
    int n;
    scanf("%d",&n);
    if(check_repeated(n) == true){
        printf("Repeated digits");
    }
    else{
        printf("No repeated digits");
    }
}
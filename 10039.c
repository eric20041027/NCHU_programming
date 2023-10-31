#include<stdio.h>
#include<stdlib.h>

int temp,digit = 0;
int sum(int n){
    temp = n;
    //printf("n = %d ",n);
    digit = 0;
    do{
        temp /= 10;
        digit++;
    }while (temp > 0);
    //printf("digit = %d ",digit);

    int list[digit];
    
    

    for(int i = 0;i<digit;i++){
        list[i] = n%10;
        n /= 10;
    }

    int result = 0;

    for(int i = 0;i<digit;i++){
        result += list[i];
    }
    //printf("result = %d ",result);
    temp = result;
    digit = 0;
    do{
        temp /= 10;
        digit++;
    }while (temp > 0);

    if(digit == 1){
        return result;
    }
    else{
        return sum(result);
    }
    
    
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d",sum(n));
}


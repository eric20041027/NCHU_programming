#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

int main(){
    char input[10];
    int m[4],n[4],A = 0,B =0;
    scanf("%[^\n]",input);
    for(int i=0;i<4;i++){
        m[i] = input[i]-'0';
        n[i] = input[i+5]-'0';
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(m[i] == n[j] && i == j){
                A++;
            }
            else if(m[i] == n[j]){
                B++;
            }
        }
    }
    printf("%dA%dB",A,B);
}
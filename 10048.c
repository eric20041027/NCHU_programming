#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int g(int x, int i) {

    return pow(x,i);

};

int f(int c[], int x, int n) {
    int result = 0;

    for(int i=0;i<n;i++){
        result += c[i] * g(x,n-i-1);
    }

    return result;
};

int main(){
    int n,x;
    scanf("%d",&n);
    int c[n];
    for(int i=0;i<n;i++){
        scanf("%d",&c[i]);
    }
    scanf("%d",&x);
    printf("%d",f(c,x,n));
}
#include<stdio.h>
#include<math.h>

int main(){
     double a,b,c,result,S;
    scanf("%lf %lf %lf",&a,&b,&c);
    S = (a+b+c)/2;
    printf("%.2lf",sqrt(S*(S-a)*(S-b)*(S-c)));
}
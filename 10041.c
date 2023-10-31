#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,m;

    scanf("%d",&n);
    int list_f[n];
    for(int i=0;i<n;i++){
        scanf("%d",&list_f[i]);
    }

    scanf("%d",&m);
    int list_g[m];
    int list_result[m+n-1];
    for(int i=0;i<m+n-1;i++){
        list_result[i] = 0;
    }

    for(int i=0;i<m;i++){
        scanf("%d",&list_g[i]);
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            list_result[i+j] += list_f[i] * list_g[j];
        }
    }
    for(int i=0;i<m+n-1;i++){
        printf("%d ",list_result[i]);
    }

}
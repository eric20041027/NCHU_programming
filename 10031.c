#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,d,max = 0,check = 0,up = 0,down = 0,len;
    scanf("%d %d",&n,&d);
    int list[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&list[i]);
    }
    /*
    for(int i=0;i<n;i++){
        printf("%d",list[i]);
    }
    */
   for(int i = 0;i<n;i++){
        for(int j = i;j<n;j++){
            up = 0;
            down = 0;
            len = 0;
            if(list[i] == 1){
                for(int k = i;k<j+1;k++){
                    if(list[k] == 1){
                        up++;
                    }
                    else{
                        down++;
                    }
                }
                printf("i = %d j = %d up = %d down = %d ",i,j,up,down);
                if(up - d <= down && down <= up + d){
                    printf("yes ");
                    len  = j - i + 1;
                    printf("%d",len);
                    if(len > max){
                        max =  len;
                    }
                }
                printf("\n");
            }
            else{

            }
        }
   }
   printf("%d",max);
}
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


void swap(int *i, int *j) {
    int temp = *i;
    *i = *j;
    *j = temp;
}

int main(){
    int n,m,command;
    scanf("%d %d",&n,&m);
    bool wall[n];
    
    for(int i=0;i<n;i++){
        wall[i] = false;
    }
    for(int i=0;i<m;i++){
        scanf("%d",&command);

        int p1,p2;
        int paint_r,paint_l,point;

        switch (command){
            case 1:
                scanf("%d %d",&p1,&p2);
                if(p1 > p2){
                    swap(&p1,&p2);
                }//座標交換when p1 < p2
                if(p1 < 0){
                    p1 = 0;
                }
                if(p2 > n){
                    p2 = n;
                }
                for(int i=p1;i<=p2;i++){
                    wall[i] = true;
                }

                break;
            
            case 2:
                scanf("%d %d",&p1,&p2);
                if(p1 > p2){
                    swap(&p1,&p2);
                }//座標交換when p1 < p2
                if(p1 < 0){
                    p1 = 0;
                }
                if(p2 > n){
                    p2 = n;
                }
                for(int i=p1;i<=p2;i++){
                    wall[i] = false;
                }

                break;

            case 3:
                scanf("%d",&p1);
                paint_r=p1;
                paint_l=p1;
                point = p1;
                if(p1 > n || p1 < 0 || wall[p1] == true){
                    break;
                }
                while (point+1 <= n && wall[point+1] == false)
                {
                    paint_r++;
                    point++;
                }

                point = p1;

                while (point-1 >= 0 && wall[point-1] == false)
                {
                    paint_l--;
                    point--;
                }

                for(int i=paint_l;i<=paint_r;i++){
                    wall[i] = true;
                }

                break;
            
            }
        }

    for (int i = 0; i < n; i++){
        printf("%c", wall[i] ? 'X' : '.');
    }
}
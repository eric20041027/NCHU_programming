#include<stdio.h>

int n;	//宣告全域變數 n 
int calMaxPointFromMap(int ans[n+1][n+1]); //宣告函式 

int main()
{
	int i, j, Max_point;
	scanf("%d", &n);
	int ans[n+1][n+1];
	for(i=0;i<=n;i++)
		for(j=0;j<=n;j++)
			ans[i][j] = 0; //初始化陣列
	
	for(i=1;i<=n;i++)  //index 從 1 開始
		for(j=1;j<=n;j++)
			scanf("%d", &ans[i][j]); //讀入地圖
	Max_point = calMaxPointFromMap(ans);
	printf("%d", Max_point);
}

int calMaxPointFromMap(int ans[n+1][n+1])
{
	int max = 0,score = 0;
    for (int i = 2; i < n; i++)
    {
        for (int j = 2; j < n; j++)
        {   
            score = 0;
            score += ans[i][j]*2;
            score += ans[i-1][j] + ans[i+1][j] + ans[i][j-1] + ans[i][j+1];
            if(score > max){
                //printf("i = %d j = %d score = %d\n",i,j,score);
                max = score;
            } 
        }
    }
	return max;
}


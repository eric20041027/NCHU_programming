#include <stdio.h>

int main() {
    int a1, a2, a3, N;
    
    scanf("%d", &N);
    
    for(a1 = 1; a1 < 10; a1++) {
        for(a2 = 0; a2 < 10; a2++) {
            for(a3 = 0; a3 < 10; a3++) {
                int sum = (a1 * 100 + a3 * 10 + a2) +
                          (a2 * 100 + a1 * 10 + a3) +
                          (a2 * 100 + a3 * 10 + a1) +
                          (a3 * 100 + a1 * 10 + a2) +
                          (a3 * 100 + a2 * 10 + a1);
                          
                if(sum == N) {
                    printf("%d %d %d", a1, a2, a3);
                    return 0;
                }
            }
        }
    }
    
    printf("找不到符合條件的組合。\n");
    
    return 0;
}

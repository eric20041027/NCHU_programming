#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2, temp, k;
    float result;
    int time = 1;
    scanf("%d %d", &n1, &n2);
    temp = n1 + n2;
    while (temp > 0) {
        k = pow(10, time);
        result += (temp % k) / pow(10, time - 1);
        temp -= temp % k;
        time++;
    }
    printf("%.0f", result);
}
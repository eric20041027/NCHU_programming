#include <stdio.h>
#include <stdlib.h>

int main() {
    int t1, t2, u1, u2, result_t, result_u, max, temp = 1;
    scanf("%d/%d %d/%d", &t1, &u1, &t2, &u2);

    result_t = t1 * u2 + t2 * u1;
    result_u = u1 * u2;
    while (temp <= result_t && temp <= result_u) {
        if (result_t % temp == 0 && result_u % temp == 0) {
            max = temp;
        }
        temp++;
    }
    // printf("%d", max);
    result_t /= max;
    result_u /= max;
    if (result_u == 1) {
        printf("%d", result_t);
    } else {
        printf("%d/%d", result_t, result_u);
    }
}
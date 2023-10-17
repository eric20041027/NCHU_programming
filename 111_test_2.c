#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int hour, min;
    char time[2];
    bool ontime = true;
    scanf("%d:%d", &hour, &min);
    scanf("%s", time);
    if (time[1] == 'P') {
        ontime = false;
    }
    if (hour < 9) {
        ontime = false;
    } else if (hour == 9 && min > 45) {
        ontime = false;
    } else if (hour > 9) {
        ontime = false;
    }
    if (ontime == true) {
        printf("YES");
    } else {
        printf("NO");
    }
}
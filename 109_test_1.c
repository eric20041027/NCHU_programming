#include <stdio.h>
#include <stdlib.h>

int main() {
    unsigned int n;
    char list[11];
    scanf("%s", list);
    char temp_l[4];
    int temp;
    temp = list[4];
    list[4] = list[6];
    list[6] = temp;
    temp = list[5];
    list[5] = list[7];
    list[7] = temp;

    for (int i = 0; i < 10; i++) {
        printf("%c", list[i]);
    }
    printf("\n");

    for (int i = 2; i < 10; i++) {
        if (list[i] >= 'a' && list[i] <= 'z') {
            temp = list[i] - 'a' + 10;
        } else {
            temp = list[i] - '0';
        }
        for (int j = 0; j < 4; j++) {
            temp_l[j] = temp % 2;
            temp /= 2;
        }
        for (int j = 3; j >= 0; j--) {
            printf("%d", temp_l[j]);
        }
        if (i % 2 == 1) {
            printf(" ");
        }
    }
}
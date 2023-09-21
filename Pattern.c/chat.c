#include<stdio.h>

int main() {
    int i, j, k;

    for (i = 1; i <= 4; i++) {
        k = 0;
        for (j = 1; j <= 8; j++) {
            j <= 5 - i ? k++ : k--;
            if (j <= i || j >= 9 - i) {
                printf("%d ", k);
            } else {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}

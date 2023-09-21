


#include<stdio.h>
#include<stdlib.h>

int main() 
{
    int i, j, n = 5, c = 1;
    int a[] = {1, 2, 2, 3,3};

    for (i = 0; i < n - 1; i++) {
        c = 1;
        for (j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                c++;
            }
        }

        if (c % 2 != 0) {
            for (j = i; j < n - 1; j++) {
                a[j] = a[j + 1];
            }
            n--; // Reduce the size of the array after removing the element.
            i--; // Decrement i to reevaluate the current index in the next iteration.
        }
    }

    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
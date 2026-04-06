#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;
    scanf("%d", &n);

    int *arr = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    scanf("%d", &m);

    arr = (int*)realloc(arr, m * sizeof(int));

    if (m > n) {
        for (int i = n; i < m; i++) {
            printf("arr[%d] = ", i);
            scanf("%d", &arr[i]);
        }
    }

    for (int i = 0; i < m; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}
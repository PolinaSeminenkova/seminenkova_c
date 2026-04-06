#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, index;
    scanf("%d", &n);

    int *arr = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    scanf("%d", &index);

    for (int i = index; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;
    arr = (int*)realloc(arr, n * sizeof(int));

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}
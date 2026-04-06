#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, index, value;
    scanf("%d", &n);

    int *arr = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    scanf("%d", &index);
    scanf("%d", &value);

    n++;
    arr = (int*)realloc(arr, n * sizeof(int));

    for (int i = n - 1; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    arr[index] = value;

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}
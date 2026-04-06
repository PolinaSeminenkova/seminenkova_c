#include <stdio.h>
#include <stdlib.h>

int findMax(int *arr, int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
    }
    return max;
}

int findMin(int *arr, int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) min = arr[i];
    }
    return min;
}

int sumArray(int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);

    int *arr = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {

        scanf("%d", &arr[i]);
    }

    printf("%d\n", findMax(arr, n));
    printf("%d\n", findMin(arr, n));
    printf("%d\n", sumArray(arr, n));

    free(arr);
    return 0;
}
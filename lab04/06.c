#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    
    FILE *file = fopen("data.bin", "wb");
    if (file == NULL) {
        printf("Oshibka otkrytiya\n");
        return 1;
    }
    
    fwrite(arr, sizeof(int), n, file);
    fclose(file);
    
    int newArr[5];
    file = fopen("data.bin", "rb");
    if (file == NULL) {
        printf("Oshibka otkrytiya\n");
        return 1;
    }
    
    fread(newArr, sizeof(int), n, file);
    fclose(file);
    
    printf("Massiv: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", newArr[i]);
    }
    
    return 0;
}
#include <stdio.h>

int main() {
    FILE *file = fopen("test.txt", "r");
    if (file == NULL) {
        printf("Oshibka otkrytiya\n");
        return 1;
    }
    
    fseek(file, 0, SEEK_END);
    long size = ftell(file);
    
    printf("Razmer faila: %ld bayt\n", size);
    
    fclose(file);
    return 0;
}
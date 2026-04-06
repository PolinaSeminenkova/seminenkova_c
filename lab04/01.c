#include <stdio.h>

int main() {
    FILE *file = fopen("test.txt", "w");
    
    if (file == NULL) {
        printf("Oshibka: ne udalos otkryt fail\n");
        return 1;
    }
    
    printf("Fail uspeshno otkryt\n");
    fclose(file);
    return 0;
}
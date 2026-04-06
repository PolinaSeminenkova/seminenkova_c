#include <stdio.h>

int main() {
    FILE *file = fopen("test.txt", "w");
    if (file == NULL) {
        printf("Oshibka otkrytiya\n");
        return 1;
    }
    
    fputs("Stroka 1\n", file);
    fputs("Stroka 2\n", file);
    fputs("Stroka 3\n", file);
    fclose(file);
    
    file = fopen("test.txt", "r");
    if (file == NULL) {
        printf("Oshibka otkrytiya\n");
        return 1;
    }
    
    char buffer[100];
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }
    
    fclose(file);
    return 0;
}
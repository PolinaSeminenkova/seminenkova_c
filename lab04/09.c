#include <stdio.h>

int main() {
    FILE *file = fopen("test.txt", "w+");
    if (file == NULL) {
        printf("Oshibka otkrytiya\n");
        return 1;
    }
    
    fputs("ABCDEFGHIJ", file);
    
    fseek(file, 3, SEEK_SET);
    int ch = getc(file);
    printf("Simvol na pozicii 3: %c\n", ch);
    
    fseek(file, -2, SEEK_END);
    ch = getc(file);
    printf("Simvol za 2 do konca: %c\n", ch);
    
    fclose(file);
    return 0;
}
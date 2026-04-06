#include <stdio.h>

int main() {
    FILE *file = fopen("test.txt", "w");
    if (file == NULL) {
        printf("Oshibka otkrytiya\n");
        return 1;
    }
    
    putc('H', file);
    putc('e', file);
    putc('l', file);
    putc('l', file);
    putc('o', file);
    fclose(file);
    
    file = fopen("test.txt", "r");
    if (file == NULL) {
        printf("Oshibka otkrytiya\n");
        return 1;
    }
    
    int ch;
    while ((ch = getc(file)) != EOF) {
        printf("%c", ch);
    }
    
    fclose(file);
    return 0;
}
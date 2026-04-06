#include <stdio.h>

int main() {
    FILE *file = fopen("test.txt", "r");
    if (file == NULL) {
        printf("Oshibka otkrytiya\n");
        return 1;
    }
    
    int ch;
    while ((ch = getc(file)) != EOF) {
        printf("%c", ch);
    }
    
    if (feof(file)) {
        printf("\nDostignut konets faila\n");
    }
    
    if (ferror(file)) {
        printf("Proizoshla oshibka chteniya\n");
    }
    
    fclose(file);
    return 0;
}
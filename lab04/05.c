#include <stdio.h>

int main() {
    char str[100];
    printf("Vvedite stroku: ");
    fgets(str, sizeof(str), stdin);
    
    FILE *file = fopen("test.txt", "w");
    if (file == NULL) {
        printf("Oshibka otkrytiya\n");
        return 1;
    }
    
    fputs(str, file);
    fclose(file);
    
    file = fopen("test.txt", "r");
    if (file == NULL) {
        printf("Oshibka otkrytiya\n");
        return 1;
    }
    
    char buffer[100];
    fgets(buffer, sizeof(buffer), file);
    printf("Soderzhimoye faila: %s", buffer);
    
    fclose(file);
    return 0;
}
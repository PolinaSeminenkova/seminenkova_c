#include <stdio.h>

int main() {
    FILE *file = fopen("data.txt", "w");
    if (file == NULL) {
        printf("Oshibka otkrytiya\n");
        return 1;
    }
    
    fprintf(file, "%d %.2f %s\n", 42, 3.14, "Privet");
    fclose(file);
    
    file = fopen("data.txt", "r");
    if (file == NULL) {
        printf("Oshibka otkrytiya\n");
        return 1;
    }
    
    int a;
    float b;
    char str[50];
    fscanf(file, "%d %f %s", &a, &b, str);
    printf("Chislo: %d\n", a);
    printf("Drobnoye: %.2f\n", b);
    printf("Stroka: %s\n", str);
    
    fclose(file);
    return 0;
}
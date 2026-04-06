#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person p = {"Polina", 20};
    
    FILE *file = fopen("person.bin", "wb");
    if (file == NULL) {
        printf("Oshibka otkrytiya\n");
        return 1;
    }
    
    fwrite(&p, sizeof(struct Person), 1, file);
    fclose(file);
    
    struct Person newP;
    file = fopen("person.bin", "rb");
    if (file == NULL) {
        printf("Oshibka otkrytiya\n");
        return 1;
    }
    
    fread(&newP, sizeof(struct Person), 1, file);
    fclose(file);
    
    printf("Imya: %s\n", newP.name);
    printf("Vozrast: %d\n", newP.age);
    
    return 0;
}
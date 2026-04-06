#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person people[3] = {
        {"Polina", 20},
        {"Daria", 19},
        {"Olesya", 21}
    };
    
    FILE *file = fopen("people.bin", "wb");
    if (file == NULL) {
        printf("Oshibka otkrytiya\n");
        return 1;
    }
    
    fwrite(people, sizeof(struct Person), 3, file);
    fclose(file);
    
    struct Person newPeople[3];
    file = fopen("people.bin", "rb");
    if (file == NULL) {
        printf("Oshibka otkrytiya\n");
        return 1;
    }
    
    fread(newPeople, sizeof(struct Person), 3, file);
    fclose(file);
    
    for (int i = 0; i < 3; i++) {
        printf("%d. %s, %d let\n", i + 1, newPeople[i].name, newPeople[i].age);
    }
    
    return 0;
}
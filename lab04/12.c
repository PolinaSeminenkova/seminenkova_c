#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
};

void addPerson() {
    struct Person p;
    printf("Vvedite imya: ");
    scanf("%s", p.name);
    printf("Vvedite vozrast: ");
    scanf("%d", &p.age);
    
    FILE *file = fopen("database.bin", "ab");
    if (file == NULL) {
        printf("Oshibka otkrytiya\n");
        return;
    }
    
    fwrite(&p, sizeof(struct Person), 1, file);
    fclose(file);
    printf("Zapis dobavlena\n");
}

void readAll() {
    struct Person p;
    FILE *file = fopen("database.bin", "rb");
    if (file == NULL) {
        printf("Fail ne naiden\n");
        return;
    }
    
    printf("\n=== Spisok lyudey ===\n");
    int i = 1;
    while (fread(&p, sizeof(struct Person), 1, file)) {
        printf("%d. %s, %d let\n", i++, p.name, p.age);
    }
    
    fclose(file);
}

int main() {
    int choice;
    do {
        printf("\n==== MENU ====\n");
        printf("1. Dobavit cheloveka\n");
        printf("2. Pokazat vseh\n");
        printf("0. Vihod\n");
        printf("Vash vibor: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1: addPerson(); break;
            case 2: readAll(); break;
            case 0: printf("Do svidaniya\n"); break;
            default: printf("Neverniy vibor\n");
        }
    } while (choice != 0);
    
    return 0;
}
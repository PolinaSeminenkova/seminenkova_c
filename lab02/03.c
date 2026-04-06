#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Person {
    char name[50];
    struct Date bd;
};

int main() {
    struct Person people[3] = {
        {"Polina", {15, 5, 2005}},
        {"Daria", {10, 8, 2004}},
        {"Olesya", {23, 12, 1999}}
    };
    
    printf("Vse lyudi:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s: %02d.%02d.%d\n", people[i].name, people[i].bd.day, people[i].bd.month, people[i].bd.year);
    }
    
    printf("\nRodivshiesya posle 2000:\n");
    for (int i = 0; i < 3; i++) {
        if (people[i].bd.year > 2000) {
            printf("%s: %02d.%02d.%d\n", people[i].name, people[i].bd.day, people[i].bd.month, people[i].bd.year);
        }
    }
    
    return 0;
}
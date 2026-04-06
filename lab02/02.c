#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    float ball;
};

int main() {
    struct Student students[5] = {
        {"Polina", 20, 4.8},
        {"Daria", 19, 4.5},
        {"Olesya", 21, 4.9},
        {"Stanislava", 20, 4.2},
        {"Victoria", 19, 4.7}
    };
    
    printf("Spisok studentov:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d. %s, %d let, ball: %.2f\n", i+1, students[i].name, students[i].age, students[i].ball);
    }
    
    int maxIndex = 0;
    for (int i = 1; i < 5; i++) {
        if (students[i].ball > students[maxIndex].ball) {
            maxIndex = i;
        }
    }
    printf("\nStudent s max ballom: %s, %.2f\n", students[maxIndex].name, students[maxIndex].ball);
    
    return 0;
}
#include <stdio.h>
#include <string.h>

enum Course {
    first = 1,
    second,
    third,
    fourth
};

struct Student {
    char name[50];
    int age;
    enum Course course;
    float ball;
};

struct Student students[100];
int count = 0;

void addStudent() {
    struct Student s;
    int c;
    printf("Imya: ");
    scanf("%s", s.name);
    printf("Vozrast: ");
    scanf("%d", &s.age);
    printf("Kurs (1-4): ");
    scanf("%d", &c);
    s.course = (enum Course)c;
    printf("Sredniy ball: ");
    scanf("%f", &s.ball);
    students[count] = s;
    count++;
    printf("Student dobavlen\n");
}

void printStudents() {
    if (count == 0) {
        printf("Net studentov\n");
        return;
    }
    for (int i = 0; i < count; i++) {
        printf("%d. %s, %d let, kurs %d, ball %.2f\n", i+1, students[i].name, students[i].age, students[i].course, students[i].ball);
    }
}

void searchByName() {
    char name[50];
    printf("Imya dlya poiska: ");
    scanf("%s", name);
    int found = 0;
    for (int i = 0; i < count; i++) {
        if (strcmp(students[i].name, name) == 0) {
            printf("%s, %d let, kurs %d, ball %.2f\n", students[i].name, students[i].age, students[i].course, students[i].ball);
            found = 1;
        }
    }
    if (!found) printf("Ne nayden\n");
}

void sortByBall() {
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (students[j].ball < students[j+1].ball) {
                struct Student temp = students[j];
                students[j] = students[j+1];
                students[j+1] = temp;
            }
        }
    }
    printf("Otsortirovano\n");
}

int main() {
    int choice;
    do {
        printf("\n==== MENU ====\n");
        printf("1. Dobavit studenta\n");
        printf("2. Vyvesti vseh\n");
        printf("3. Poisk po imeni\n");
        printf("4. Sortirovka po ballu\n");
        printf("0. Vihod\n");
        printf("Vash vibor: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1: addStudent(); break;
            case 2: printStudents(); break;
            case 3: searchByName(); break;
            case 4: sortByBall(); break;
            case 0: printf("Do svidaniya\n"); break;
            default: printf("Neverniy vibor\n");
        }
    } while (choice != 0);
    
    return 0;
}
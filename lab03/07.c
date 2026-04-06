#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
};

int main() {
    int n;
    scanf("%d", &n);

    struct Student *students = (struct Student*)malloc(n * sizeof(struct Student));

    for (int i = 0; i < n; i++) {
        scanf("%s", students[i].name);
        scanf("%d", &students[i].age);
    }

    for (int i = 0; i < n; i++) {
        printf("%d. %s, %d let\n", i + 1, students[i].name, students[i].age);
    }

    int oldest = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].age > students[oldest].age) {
            oldest = i;
        }
    }
    printf("\nSamiy starshiy: %s, %d let\n", students[oldest].name, students[oldest].age);

    free(students);
    return 0;
}
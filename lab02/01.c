#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    float ball;
};

int main() {
    struct Student s1 = {"Polina", 20, 4.8};
    
    printf("Imya: %s\n", s1.name);
    printf("Vozrast: %d\n", s1.age);
    printf("Sredniy ball: %.2f\n", s1.ball);
    
    struct Student s2;
    scanf("%s", s2.name);
    scanf("%d", &s2.age);
    scanf("%f", &s2.ball);
    
    printf("\nImya: %s\n", s2.name);
    printf("Vozrast: %d\n", s2.age);
    printf("Sredniy ball: %.2f\n", s2.ball);
    
    return 0;
}
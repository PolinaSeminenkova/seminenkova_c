#include <stdio.h>
#include <stdlib.h>

int *arr = NULL;
int size = 0;

void addElement() {
    int value;
    printf("Vvedite znachenie: ");
    scanf("%d", &value);
    size++;
    arr = (int*)realloc(arr, size * sizeof(int));
    arr[size - 1] = value;
    printf("Element dobavlen!\n");
}

void deleteElement() {
    int index;
    printf("Vvedite index dlya udaleniya (0-%d): ", size - 1);
    scanf("%d", &index);
    if (index < 0 || index >= size) {
        printf("Neverniy index!\n");
        return;
    }
    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
    arr = (int*)realloc(arr, size * sizeof(int));
    printf("Element udalen!\n");
}

void printList() {
    if (size == 0) {
        printf("Spisok pust\n");
        return;
    }
    printf("Spisok: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void changeSize() {
    int newSize;
    printf("Vvedite noviy razmer: ");
    scanf("%d", &newSize);
    arr = (int*)realloc(arr, newSize * sizeof(int));
    if (newSize > size) {
        for (int i = size; i < newSize; i++) {
            printf("arr[%d] = ", i);
            scanf("%d", &arr[i]);
        }
    }
    size = newSize;
    printf("Razmer izmenen!\n");
}

int main() {
    int choice;
    do {
        printf("\n==== MENU ====\n");
        printf("1. Dobavit element\n");
        printf("2. Udalit element\n");
        printf("3. Vivesti spisok\n");
        printf("4. Izmenit razmer massiva\n");
        printf("0. Vihod\n");
        printf("Vash vibor: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addElement(); break;
            case 2: deleteElement(); break;
            case 3: printList(); break;
            case 4: changeSize(); break;
            case 0: printf("Do svidaniya!\n"); break;
            default: printf("Neverniy vibor!\n");
        }
    } while (choice != 0);

    free(arr);
    return 0;
}
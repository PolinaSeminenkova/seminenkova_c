#include <stdio.h>

struct Rectangle {
    float width;
    float height;
};

float areaByValue(struct Rectangle r) {
    return r.width * r.height;
}

float areaByPointer(struct Rectangle *r) {
    return r->width * r->height;
}

float perimeterByValue(struct Rectangle r) {
    return 2 * (r.width + r.height);
}

float perimeterByPointer(struct Rectangle *r) {
    return 2 * (r->width + r->height);
}

int main() {
    struct Rectangle rect = {5.0, 3.0};
    
    printf("Ploshad (po znacheniyu): %.2f\n", areaByValue(rect));
    printf("Ploshad (po ukazatelyu): %.2f\n", areaByPointer(&rect));
    printf("Perimetr (po znacheniyu): %.2f\n", perimeterByValue(rect));
    printf("Perimetr (po ukazatelyu): %.2f\n", perimeterByPointer(&rect));
    
    return 0;
}
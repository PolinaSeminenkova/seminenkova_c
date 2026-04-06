#include <stdio.h>
#include <string.h>

union Data {
    int i;
    float f;
    char str[20];
};

struct Variant {
    union Data data;
    int type;
};

int main() {
    union Data d;
    
    d.i = 42;
    printf("int: %d\n", d.i);
    printf("float: %f\n", d.f);
    printf("string: %s\n\n", d.str);
    
    d.f = 3.14;
    printf("float: %f\n", d.f);
    printf("int: %d\n", d.i);
    printf("string: %s\n\n", d.str);
    
    strcpy(d.str, "hello");
    printf("string: %s\n", d.str);
    printf("int: %d\n", d.i);
    printf("float: %f\n\n", d.f);
    
    struct Variant v;
    v.type = 1;
    v.data.i = 100;
    printf("type=%d, value=%d\n", v.type, v.data.i);
    
    v.type = 2;
    v.data.f = 99.5;
    printf("type=%d, value=%.2f\n", v.type, v.data.f);
    
    v.type = 3;
    strcpy(v.data.str, "hello");
    printf("type=%d, value=%s\n", v.type, v.data.str);
    
    return 0;
}
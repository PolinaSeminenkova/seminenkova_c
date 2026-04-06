#include <stdio.h>
int main () {
    int a;
    float b;
    char c;
    a = 10;
    b = 3.14;
    c = 'A';
    printf ("a = %d, address = %p\n", a, &a);
    printf ("b = %.2f, address = %p\n", b, &b);
    printf ("c = %c, address = %p\n", c, &c);
    return 0;
}
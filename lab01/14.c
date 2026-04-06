#include <stdio.h>
int main() {
    int a, b, c;
   printf ("%d, %d, %d", &a-&b, &b-&c, &c-&a);
    return 0;
}
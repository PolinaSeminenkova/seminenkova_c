#include <stdio.h>
int main() {
    int a;
   scanf ("%d", &a);
   printf ("%2d:%2d:%2d", a/3600, (a%3600)/60, a%60);
    return 0;
}
#include <stdio.h>

int main() {
    double x;
    unsigned short n;

    scanf("%lf %hd", &x, &n);
    printf("%.*f", n, x);
}
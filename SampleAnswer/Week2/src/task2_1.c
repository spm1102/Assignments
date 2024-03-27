#include <stdio.h>

int main() {
    int a = 4;
    float b = 3.14;
    char c = 97;
    unsigned short d = 128;
    char str[] = "Hello World!";

    printf("%d\n%.4f\n%c\n%hu\n%s", a, b, c, d, str);
}
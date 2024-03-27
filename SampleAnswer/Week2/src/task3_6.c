#include <stdio.h>

#define MAX_STRING_SIZE     90
#define STRING_INIT_VALUE   0

int main() {
    char str[MAX_STRING_SIZE] = { STRING_INIT_VALUE };
    scanf("%*[^:]%*2c%[^\n]", str);
    printf("%s", str);
}
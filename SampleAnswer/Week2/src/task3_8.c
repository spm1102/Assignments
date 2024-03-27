#include <stdio.h>

#define MAX_STRING_SIZE     101
#define STRING_INIT_VALUE   0

int main() {
    char str[MAX_STRING_SIZE] = { STRING_INIT_VALUE };
    scanf("%[a-z0-48@. ]", str);
    printf("%s", str);
    fflush(stdin);
}
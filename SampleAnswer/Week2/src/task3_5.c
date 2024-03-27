#include <stdio.h>

int main() {
    unsigned int ID;
    scanf("%4d", &ID);
    printf("%d\n%d", ID, (ID * 2) + (ID % 100));
}
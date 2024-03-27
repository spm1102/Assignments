#include <stdio.h>

#define MAX_NAME_SIZE       31
#define MAX_ID_SIZE         9
#define MAX_CLASS_SIZE      10
#define MAX_GENERATION_SIZE 4

#define STRING_INIT_VALUE   0

int main() {
    char name[MAX_NAME_SIZE] = { STRING_INIT_VALUE };
    char ID[MAX_ID_SIZE] = { STRING_INIT_VALUE };
    char class[MAX_CLASS_SIZE] = { STRING_INIT_VALUE };
    char generation[MAX_GENERATION_SIZE] = { STRING_INIT_VALUE };
    float gpa;
    scanf("%[^,],%[^,],%[^,],%[^,],%f", name, ID, class, generation, &gpa);
    printf("%s\n%s\n%s\n%s\n%.2f", name, ID, class, generation, gpa);
}
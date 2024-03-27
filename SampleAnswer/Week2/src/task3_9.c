#include <stdio.h>

#define MAX_NAME_SIZE           31
#define MAX_ID_SIZE             9
#define MAX_FIELD_SIZE          151
#define MAX_FIELD_CODE_SIZE     6
#define MAX_GENERATION_SIZE     4

#define STRING_INIT_VALUE       0

int main() {
    char name[MAX_NAME_SIZE] = { STRING_INIT_VALUE };
    char id[MAX_ID_SIZE] = { STRING_INIT_VALUE };
    int day, month, year;
    char field[MAX_FIELD_SIZE] = { STRING_INIT_VALUE };
    char field_code[MAX_FIELD_CODE_SIZE] = { STRING_INIT_VALUE };
    int class_number;
    char generation[MAX_GENERATION_SIZE] = { STRING_INIT_VALUE };
    float gpa;

    scanf("%[^\n]", name);
    scanf("%s", id);
    scanf("%d-%d-%d%*c", &day, &month, &year);
    scanf("%[^\n]", field);
    scanf("%s", field_code);
    scanf("%d", &class_number);
    scanf("%s", generation);
    scanf("%f", &gpa);

    printf("Name: %s\n", name);
    printf("ID: %s\n", id);
    printf("Date of birth: %02d/%02d/%04d\n", day, month, year);
    printf("Field: %s\n", field);
    printf("Class: %s-%02d - %s\n", field_code, class_number, generation);
    printf("GPA: %.2f\n", gpa);
}
#include <stdio.h>

int main() {
    int address = 4152963;
    char* path = "C:\\User\\Administrator\\Downloads\\file.txt";
    char* content = "\"Hello World!\"";
    char* author = "Tran Quang Huy";
    char* size = "4KB";
    char* date_created = "19/03/2024";
    char* date_modified = "20/03/2024";

    printf("%-.40s\n", "=========================================");
    printf("%25s%s\n", "FILE REPORT", "");
    printf("%-.40s\n", "=========================================");
    printf("%-20s%X\n", "File address:", address);
    printf("%-20s%s\n", "Path:", path);
    printf("%-20s%s\n", "Content:", content);
    printf("%-20s%s\n", "Author:", author);
    printf("%-20s%s\n\n", "Size:", size);
    printf("Metadata:\n");
    printf("%-20s%s\n", "Date created:", date_created);
    printf("%-20s%s\n", "Date modified:", date_modified);
}
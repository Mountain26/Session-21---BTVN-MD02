#include <stdio.h>

int main() {
    FILE *fptr;
    char ch;

    fptr = fopen("bt01.txt", "r");
    if (fptr == NULL) {
        printf("Khong the mo file.\n");
        return 1;
    }

    ch = fgetc(fptr);
    if (ch != EOF) {
        printf("Ky tu dau tien trong file la: %c\n", ch);
    } else {
        printf("File rong.\n");
    }

    fclose(fptr);
    return 0;
}


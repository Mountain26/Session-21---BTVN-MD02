#include <stdio.h>

int main() {
    FILE *file;
    char lineone[256];

    file = fopen("bt01.txt", "r");
    if (file == NULL) {
        printf("Khong the mo file.\n");
        return 1;
    }

    if (fgets(lineone, sizeof(lineone), file) != NULL) {
        printf("Dong dau tien: %s", lineone);
    }

    fclose(file);
    return 0;
}


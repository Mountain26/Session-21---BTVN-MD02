#include <stdio.h>

int main() {
    char str[50];
    
    FILE *fptr;
    fptr = fopen("bt01.txt", "a");
    if (fptr == NULL) {
        printf("Khong the mo file.\n");
        return 1;
    }

    printf("Moi ban nhap vao mot chuoi de ghi them vao file: ");
    scanf("%s", str);
    if (str[0] != '\0') {
        fprintf(fptr, "%s\n", str);
        printf("Chuoi da duoc ghi them vao bt01.txt\n");
    } else {
        printf("Khong co chuoi de ghi.\n");
    }

    fclose(fptr);
    return 0;
}


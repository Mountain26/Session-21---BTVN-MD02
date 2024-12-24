#include <stdio.h>

int main() {
    char str[50];
    
    FILE *fptr;
    fptr = fopen("bt01.txt", "w");
    if (fptr == NULL) {
        printf("Khong the mo file.\n");
        return 1;
    }

    printf("Moi ban nhap vao mot chuoi de luu vao file: ");
    scanf("%s", str);
    fprintf(fptr, "%s", str);

    fclose(fptr);
    printf("Chuoi da duoc luu vao bt01.txt\n");
    
    return 0;
}


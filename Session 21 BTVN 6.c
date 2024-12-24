#include <stdio.h>

void displayFile(const char *filename);

int main(){
    FILE *sourceFile, *tepdich;

    sourceFile = fopen("bt01.txt", "r");
    if(sourceFile == NULL){
        printf("Loi mo source file!\n");
        return 1;
    }

    tepdich = fopen("bt06.txt", "w");
    if(tepdich == NULL){
        printf("Loi mo tep dich!\n");
        fclose(sourceFile);
        return 1;
    }
    displayFile("bt06.txt");

    char data;
    while((data = fgetc(sourceFile)) != EOF){
        fputc(data, tepdich);
    }

    printf("Sao chep thanh cong noi dung tu bt01.txt sang bt06.txt\n");

    fclose(sourceFile);
    fclose(tepdich);

    displayFile("bt06.txt");

    return 0;
}

void displayFile(const char *filename){
    FILE *fptr = fopen(filename, "r");
    if(fptr == NULL){
        printf("Loi mo file %s!\n", filename);
        return;
    }

    char data;
    printf("Noi dung cua file %s:\n", filename);
    while((data = fgetc(fptr)) != EOF){
        putchar(data);
    }
    printf("\n");

    fclose(fptr);
}

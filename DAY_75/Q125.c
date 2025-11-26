Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

#include <stdio.h>

int main() {
    char filename[100];
    char text[1000];
    printf("Enter the filename: ");
    scanf("%s", filename);
    getchar();  
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);
    FILE *fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Cannot open file.\n");
        return 1;
    }
    fprintf(fp, "%s", text);
    fclose(fp);

    printf("File updated successfully with appended text.\n");

    return 0;
}

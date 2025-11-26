Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

#include <stdio.h>

int main() {
    char source[100], destination[100];
    printf("Enter source file name: ");
    scanf("%s", source);

    printf("Enter destination file name: ");
    scanf("%s", destination);
    FILE *src = fopen(source, "r");
    if (src == NULL) {
        printf("Error: Cannot open source file.\n");
        return 1;
    }
    FILE *dest = fopen(destination, "w");
    if (dest == NULL) {
        printf("Error: Cannot open destination file.\n");
        fclose(src);
        return 1;
    }
    char ch;
    while ((ch = fgetc(src)) !=

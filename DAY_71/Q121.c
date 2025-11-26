Q121: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.

#include <stdio.h>

int main() {
    char name[100];
    int age;

    // Take user input
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    int len = 0;
    while(name[len] != '\0') {
        if(name[len] == '\n') {
            name[len] = '\0';
            break;
        }
        len++;
    }

    printf("Enter your age: ");
    scanf("%d", &age);
    FILE *fp = fopen("info.txt", "w");
    if(fp == NULL) {
        printf("Error creating file.\n");
        return 1;
    }
    fprintf(fp, "Name: %s\nAge: %d\n", name, age);
    fclose(fp);

    printf("File created successfully! Data written to info.txt\n");

    return 0;
}

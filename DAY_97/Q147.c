Q147: Store employee data in a binary file using fwrite() and read using fread().

#include <stdio.h>
#include <stdlib.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    FILE *fp;
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee emp[n];
    for (i = 0; i < n; i++) {
        printf("Enter details of employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", emp[i].name);

        printf("ID: ");
        scanf("%d", &emp[i].id);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
        printf("\n");
    }
    fp = fopen("employees.bin", "wb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    fwrite(emp, sizeof(struct Employee), n, fp);
    fclose(fp);

    printf("Employee data stored successfully in employees.bin\n\n");
    fp = fopen("employees.bin", "rb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    printf("Employee Data from file:\n");
    for (i = 0; i < n; i++) {
        fread(&emp[i], sizeof(struct Empl

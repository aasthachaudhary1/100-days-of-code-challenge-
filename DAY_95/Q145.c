Q145: Return a structure containing top student's details from a function.

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};
struct Student findTopper(struct Student s[], int n) {
    int i, topperIndex = 0;

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[topperIndex].marks) {
            topperIndex = i;
        }
    }

    return s[topperIndex];
}

int main() {
    int n, i;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];
    for (i = 0; i < n; i++) {
        printf("Enter details of student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll: ");
        scanf("%d", &s[i].roll);

        printf("Marks: ");
        scanf("%d", &s[i].marks);

        printf("\n");
    }
    struct Student top = findTopper(s, n);
    printf("Top Student: %s | Roll: %d | Marks: %d\n", top.name, top.roll, top.marks);

    return 0;
}

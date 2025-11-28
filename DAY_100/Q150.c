Q150: Use pointer to struct to modify and display data using -> operator.

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student s;
    struct Student *ptr;

    ptr = &s;  
    printf("Enter Name: ");
    scanf("%s", ptr->name);

    printf("Enter Roll: ");
    scanf("%d", &ptr->roll);

    printf("Enter Marks: ");
    scanf("%d", &ptr->marks);
    printf("Modified Data: Name: %s | Roll: %d | Marks: %d\n",
           ptr->name, ptr->roll, ptr->marks);

    return 0;
}

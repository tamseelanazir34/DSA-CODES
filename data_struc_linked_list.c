#include <stdio.h>

struct student {
    int roll_no;
    char name[50];
    struct student *next;
};

int main() {
    struct student s1, s2, s3;

    printf("Enter roll number and name of student 1: ");
    scanf("%d %s", &s1.roll_no, s1.name);

    printf("Enter roll number and name of student 2: ");
    scanf("%d %s", &s2.roll_no, s2.name);

    printf("Enter roll number and name of student 3: ");
    scanf("%d %s", &s3.roll_no, s3.name);

    // Linking the nodes
    s1.next = &s2;
    s2.next = &s3;
    s3.next = NULL;

    // Displaying the linked list
    struct student *p = &s1;
    printf("\nStudent List:\n");
    while (p != NULL) {
        printf("Roll No: %d, Name: %s\n", p->roll_no, p->name);
        p = p->next;
    }

    return 0;
}


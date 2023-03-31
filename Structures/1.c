#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

struct Student {
    int roll;
    char name[50];
    int marks[3];
    float percentage;
};

int n;
struct Student students[MAX_STUDENTS];

void addStudentDetails() {
    printf("Enter the number of students: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i+1);
        printf("Roll number: ");
        scanf("%d", &students[i].roll);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name);
        printf("Marks of 3 subjects: ");
        scanf("%d %d %d", &students[i].marks[0], &students[i].marks[1], 
        &students[i].marks[2]);
        students[i].percentage = (students[i].marks[0] + students[i].marks[1] + 
        students[i].marks[2]) / 3.0;
    }
}

void searchStudent() {
    int roll;
    printf("Enter Roll= ");
    scanf("%d", &roll);
    for (int i = 0; i < n; i++) {
        if (students[i].roll == roll) {
            printf("Student found!\n");
            printf("Roll number: %d\n", students[i].roll);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %d %d %d\n", students[i].marks[0], students[i].marks[1],
             students[i].marks[2]);
            printf("Percentage: %.2f\n", students[i].percentage);
            return;
        }
    }
    printf("Student not found!\n");
}

void modifyStudent() {
    int roll;
    printf("Enter the roll number of the student: ");
    scanf("%d", &roll);
    for (int i = 0; i < n; i++) {
        if (students[i].roll == roll) {
            printf("Enter new details for student:\n");
            printf("Name: ");
            scanf(" %[^\n]", students[i].name);
            printf("Marks of 3 subjects: ");
            scanf("%d %d %d", &students[i].marks[0], &students[i].marks[1],
             &students[i].marks[2]);
            students[i].percentage = (students[i].marks[0] + students[i].marks[1] + 
            students[i].marks[2]) / 3.0;
            printf("Student modified successfully!\n");
            return;
        }
    }
    printf("Student not found!\n");
}

void displayAllStudents() {
    printf("List of all students:\n");
    for (int i = 0; i < n; i++) {
        printf("Roll number: %d\n", students[i].roll);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %d %d %d\n", students[i].marks[0], students[i].marks[1], 
        students[i].marks[2]);
        printf("Percentage: %.2f\n\n", students[i].percentage);
    }
}

void displayAbove80Students() {
    printf("List of students with percentage > 80:\n");
    for (int i = 0; i < n; i++) {
        if (students[i].percentage > 80) {
            printf("Roll No: %d, Name: %s, Percentage: %.2f\n", 
            students[i].roll, students[i].name, students[i].percentage);
        }
    }
}

void display_max_percentage_student() {
    float max_percentage = 0;
    int max_percentage_index = -1;
    for (int i = 0; i < n; i++) {
        if (students[i].percentage > max_percentage) {
            max_percentage = students[i].percentage;
            max_percentage_index = i; }
    }
    if (max_percentage_index >= 0) {
        printf("Student with maximum percentage:\n");
        printf("Roll No: %d, Name: %s, Percentage: %.2f\n", 
        students[max_percentage_index].roll, students[max_percentage_index].name, students[max_percentage_index].percentage);
    }
}

void display_menu() {
    printf("Menu:\n");
    printf("1. Add student\n");
    printf("2. Display students with percentage > 80\n");
    printf("3. Display student with maximum percentage\n");
    printf("4. Exit\n");
}

int main() {
    int choice;
    do {
        display_menu();
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {case 1:
                add_student();
                break;
            case 2:
                display_students_above_80();
                break;
            case 3:
                display_max_percentage_student();
                break;
            case 4:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != 4);
    return 0;
}
        

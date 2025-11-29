#include <stdio.h>
#include <string.h>
struct Student {
    char name[50];
    float cgpa;
};
int main() {
    struct Student s;
    strcpy(s.name, "Alice");
    s.cgpa = 4.0;
    
    printf("Student Details:\n");
    printf("Name: %s\n", s.name);
    printf("CGPA: %.2f\n", s.cgpa);
}

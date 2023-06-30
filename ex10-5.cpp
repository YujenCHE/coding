#include <stdio.h>

struct student
{
    char name[40];
    int roll;
    float marks;
}s;//s是變數

int main()
{
    printf("Enter info\n");
    printf("Enter name : ");
    fgets(s.name, sizeof(s.name), stdin);
    
    printf("Enter roll number : ");
    scanf("%d", &s.roll);
    
    printf("Enter marks : ");
    scanf("%f", &s.marks);
    
    printf("Display ==>\n");
    printf("Name : ");
    printf("%s", s.name);
    printf("Roll number : %d\n", s.roll);
    printf("Marks : %.1f\n", s.marks);
    
    return 0;
    
}

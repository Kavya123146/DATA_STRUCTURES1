#include <stdio.h>
struct student
{
    int roll;
    char name[20];
    float marks;
    char grade;
};
int main() {
    struct student s;
    printf("\neter student roll number:");
    scanf("%d",&s.roll);
    printf("\nenter student name:");
    scanf("%[^\n]s",s.name);
    printf("\nenter student marks:");
    scanf("%f",&s.marks);
    printf("\n enter student grade; ");
    scanf(" %c",&s.grade);
    printf("\n%d,\n%s,\n%f\n%c",s.roll,s.name,s.marks,s.grade);
    
    return 0;
	

}

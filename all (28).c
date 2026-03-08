#include <stdio.h>
union student
{
    int roll;
    char grade;
    float marks;
};
int main()
{
 union student s;
 s.roll=101;
 s.marks=98.6;
 s.grade='a';
 printf("\n size of s is %d",sizeof(s));
 printf("\n student roll number=%d",s.roll);
 printf("\nstudent grade= %c",s.grade);
 printf("\n student marks=%f",s.marks);
 

 return 0;
}




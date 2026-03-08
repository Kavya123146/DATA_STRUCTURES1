#include <stdio.h>
union student
{
    int roll;
    float marks;
    char grade;
};
int main()
{
 union student s;
 s.roll=101;
 s.marks=98.6;
 s.grade='a';
 printf("\n size of s is %d",sizeof(s));
 printf("\n student roll number=%d",s.roll);
 printf("\n student marks =%f",s.marks);
 printf("\n student grade= %c",s.grade);
 return 0;
}




#include <stdio.h>
struct student
{
    int roll;
    char name[20];
    float marks;
    char grade;
};
int main() {
    struct student s1={1,"seetha",98.5,'o'},s2={2,"aditya",68.5,'b'};
    printf("\n student roll number=%d,student name=%s,student marks=%f,student grade=%c",s1.roll,s1.name,s1.marks,s1.grade);
    printf("\n student roll number=%d,student name=%s,student marks=%f,student grade=%c",s2.roll,s2.name,s2.marks,s2.grade);
    return 0;
	

}


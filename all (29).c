#include <stdio.h>
union employee
{
    int roll;
    float salary;
};
int main()
{
 union employee e;
 e.roll=101;
 e.salary=100000;
 
 printf("\n size of e is %d",sizeof(e));
 printf("\n employee roll number=%d",e.roll);
 printf("\n employee salary=%f",e.salary);
 

 return 0;
}




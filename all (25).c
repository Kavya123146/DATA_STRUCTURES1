#include <stdio.h>
struct employee
{
    int eid;
    char ename[20];
    float salary;
};
int main() {
    struct employee e;
    printf("\nenter employee id:");
    scanf("%d",&e.eid);
    printf("\nenter employee name:");
    scanf("%s",&e.ename);
    printf("\nenter employee salary:");
    scanf("%f",&e.salary);
    printf("\n%d,\n%s,\n%f",e.eid,e.ename,e.salary);
    
    return 0;
	

}


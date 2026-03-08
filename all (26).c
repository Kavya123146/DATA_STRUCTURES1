#include <stdio.h>
#include<string.h>
struct employee
{
    int eid;
    char ename[20];
    float salary;
};
int main() {
    struct employee e;
    e.eid=1;
    strcpy(e.ename,"seetha");
    e.salary=10000;
    printf("\n %d,%s,%f",e.eid,e.ename,e.salary);
    return 0;
}


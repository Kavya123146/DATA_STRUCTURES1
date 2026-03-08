#include <stdio.h>
struct student
{
    int marks;
};
int main()
{
    struct student s[100];
    int n,i,count=0;
    printf("enter n value");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n student %d marks",i+1);
        scanf("%d",&s[i].marks);
        if(s[i].marks>50)
        {
            count++;
        }
    }
        printf("%d",count);
        return 0;
    
    
    
}
	




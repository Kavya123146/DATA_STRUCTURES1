#include <stdio.h>
struct student{
	int marks;
};
int main()
{
	struct student s[100];
	int n,i,total=0;
	float avg;
	printf("\n enter n size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n student %d marks",i+1);
		scanf("\n%d",&s[i].marks);
		total=total+s[i].marks;
	}
	avg=(float)total/n;
	printf("\ntotal marks=%d\n average=%f",total,avg);
	return 0;
}

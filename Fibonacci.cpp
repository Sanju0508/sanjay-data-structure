#include<stdio.h>
int main()
{
	int a=0,b=1,num,c;
	printf("enter number of terms:");
	scanf("%d",&num);
	for(int i=0;i<num;i++)
	{
		printf("%d\t",a);
		c=a+b;
		a=b;
		b=c;
	}
	return 0;
}

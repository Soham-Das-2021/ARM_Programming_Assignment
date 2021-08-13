#include<stdio.h>

int main()
{
	int a,b,c,max=0;
	
	
	printf("Please enter the 1st integer:\n");
	scanf("%d",&a);
	printf("Please enter the 2nd integer:\n");
	scanf("%d",&b);
	printf("Please enter the 3rd integer:\n");
	scanf("%d",&c);
	
	if(a>max)
	{
		max=a;
		if(b>max)
		{
			max=b;
		}
		if(c>max)
		{
			max=c;
		}
	}
	
	
	printf("The largest integer:%d",max);
	
	return 0;
}

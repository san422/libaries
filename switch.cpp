#include<stdio.h>
#include<conio.h>
int main()
{
	int a=8,b=7,c,n;
	printf("1.Add\n");
	printf("subtract\n");
	printf("Enter your choice:\n");
	scanf("%d",&n);
	switch(n)	
	{
		case 1: c=a+b,printf("%d",c);
		break;
		case 2: c=a-b;
		break;
	}
	return 0;
}

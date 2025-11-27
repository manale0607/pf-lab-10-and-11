#include<stdio.h>
int sumnum(int n)
{
	if(n==0)
	return 0;
	else
	return (n%10)+sumnum(n/10);
}
int main()
{
	int result,num;
	printf("\n enter your number:");
	scanf("%d",&num);
	result=sumnum(num);
	printf("\n the sum is: %d",result);
	return 0;
}

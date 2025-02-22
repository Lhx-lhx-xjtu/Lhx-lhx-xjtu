#include<stdio.h>
int f(int n)
{
	if(n==0)
		return 1;
	if(n==1)
		return 0;
	return (n-1)*(f(n-1)+f(n-2));
}
int main()
{
	int n,result;
	scanf("%d",&n);
	result=f(n);
	printf("%d",result);
	return 0;
}

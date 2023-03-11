#include<stdio.h>

void fun()
{
	printf("%d ",n);
	fun(n-1);
	fun(n-1);
}

void main()
{
	fun(3);
	return 0;
}

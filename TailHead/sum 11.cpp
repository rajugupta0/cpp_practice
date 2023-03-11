#include<iostream>
int sum (int n)
{
	return n*(n-1)/2;
}
int main()
{
	int num;
	cout<<"Enter num :";
	cin>>num;
	sum(num);
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	int n,i,fact=1;
	cout<<"Enter n";
	cin>>n;
	for(i=1;i<=n;i++)
	{
	   fact= fact*i;
	}
	cout<<"FACTORIAL IS "<<fact<<endl;
	return 0;
	
}

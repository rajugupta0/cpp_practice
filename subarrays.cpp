#include<iostream>
using namespace std;
main()
{
	int n ,i;
	cout<<"Enter n :";
	cin>>n;
	int a[1000];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
//	Generate all subarrays
for(i=0;i<n;i++)
{
	for(int j=i;j<n;j++)
	{
		//Elements of subsarray
	    for( int k=i;k<=j;k++)
	    {
	    	cout<<a[k]<<",";
		}
		cout<<endl;
	}
}
}

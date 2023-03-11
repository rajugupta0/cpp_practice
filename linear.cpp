#include<iostream>
using namespace std;
int main()
{
	int i, n, key;
	cin>>n;
	int a[1000];
	for(i=0 ; i < n ; i++ ){
		cin>>a[i];
	}
	cout<<"Enter the Element:";
	cin>>key;
	for(i=0;i<=n - 1;i++)
	{
		if(a[i]==key)
		{
			cout<<"Element is: "<<i<<" index";
			break;
		}
	}
	if(i==n)
	{
		cout<<key<<"is not present";
	}
	return 0;
}

#include<iostream>
using namespace std;
int main()
{

	// initialization of an array
	int a[10] = {0};
		// size of array
	cout<<sizeof(a)<<endl;
	int n =sizeof(a);
	cout<<n<<endl;
	// input elements of an array
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<10;i++)
	{
		cout<<a[i]<<" ";
	}
//	for(int i=0;i< n;i++)
//	{
//		cout<<a[i]<<" ,";
//	}
return 0;
}

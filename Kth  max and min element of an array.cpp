#include<iostream>
using namespace std;
void insertion_sort(int a[],int n)
{
	int i,e;
	for(i=1;i<=n-1;i++)
	{
		e=a[i];
		int j=i-1;
		while(j>0 && a[j]>e)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=e;
	}
}
int main()
{

int i ,n,k;
cout<<"Enter n"<<endl;
int a[1000];
cin>>n;
for(i=0;i<n;i++)
{
	cin>>a[i];
}
 insertion_sort(a, n);
{
	for(i=0;i<n;i++)
	cout<<a[i]<<" ,";
}
cout<<"Enter K: ";
 cin>>k;
 
cout<<"kth smallest element :"<<a[k+1];
return 0;
}

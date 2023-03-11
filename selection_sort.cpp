#include<iostream>
using namespace std;
void selection_sort(int n,int a[])
{
   int i,min_index;
	for(int i=0;i<n-1;i++){
			int min_index =i;
			for(int j=i;j<=n-1;j++){
			  if(a[j]<a[min_index])
			  min_index =j;
			}
	}
    swap(a[i],a[min_index]);
}
int main()
{
	int i,n;
	int a[1000];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	 void selection_sort(int n, int a[]);
	{
		for(i=0;i<n;i++)
		{
			cout<<a[i]<<",";
		}
	}
	return 0;
}

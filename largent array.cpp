#include<iostream>
#include<climits>

using namespace std;
int main()
{
	int n,i;
	cin>>n;
	int a[100];
	for( i=0;i<n;i++){
		cin>>a[i];
	}
	int largest =INT_MIN;
	int smallest = INT_MAX;
	
	for(int i=0;i<n;i++)
	{
		if (a[i]>largest){
			largest=a[i];
		}
		if(a[i]<smallest){
			smallest =a[i];
		}
	}
	cout<<"Largest no is: "<<largest<<endl;
	cout<<"Smallest no is "<<smallest<<endl;
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	int n;
	int maximSum =0;
	int currentSum =0;
	cout<<"Enter n :";
	cin>>n;
	int a[1000];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			currentSum =0;
			for(int k=i;k<=j;k++)
			{
				currentSum += a[k];
			}
//			update
            if(currentSum>maximSum){
            	maximSum = currentSum;
//            	left  = i;
//            	right = j;
			}
            
		}
	}
//	print the maximSum
    cout<<"Maximum Sum is :"<<maximSum<<",";
//    print the subarray
//    for(int k=left;k<=right;k++)
//    {
//    	cout<<a[k]<<",";
//	}
	return 0;
}

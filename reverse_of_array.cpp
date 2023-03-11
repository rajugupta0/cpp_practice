#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int i,n;
	int arr[n];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
//	reverse
     int start =0;
     int end = n-1;
     while(start<end)
     {
//       	swap(arr[start],arr[end]);
        int temp =arr[start];
        arr[start] = arr[end];
        arr[end] =  temp;
       	start++;
       	end--;
	 }

//    print array	
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}

	return 0;
}

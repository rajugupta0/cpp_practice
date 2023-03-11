//Approach: Count the number of 0s, 1s and 2s in the given array. 
//Then store all the 0s in the beginning followed by all the 1s then
//all the 2s.
//Algorithm:
//1)Keep three counter c0 to count 0s, c1 to count 1s and c2 to count 2s
//2)Traverse through the array and increase the count of c0 is the 
//  element is 0,increase the count of c1 if the element is 1 and 
//  increase the count of c2 if the element is 2
//3)Now again traverse the array and replace first c0 elements with 0, 
//  next c1 elements with 1 and next c2 elements with 2.

#include<iostream>
using namespace std;

void sort(int *a,int n){
	int c0 =0,c1 =0,c2=0;
	for(int i=0;i<n;i++){
		if(a[i]==0)
		c0++;
		else if(a[i]==1)
		c1++;
		else c2++;
	}
	for(int i=0;i<n;i++){
		if(a[i]<c0)
		a[i]=0;
		else if(a[i]<c1+c0)
		a[i]=1;
		else a[i]=2;
	}
}

int main()
{
 	int i,n;
 	int a[n];
 	cin>>n;
    for(i =0;i<n;i++)
    {
    	cin>>a[i];
	}

    sort(a,n);
    
    for(int i =0;i<n;i++){
    	cout<<a[i]<<" ";
    	cout<<endl;
	}
	return 0;
}


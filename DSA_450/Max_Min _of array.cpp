  
  //Find the maximum and minimum element in an array DSA -450 ;2/450;
#include<iostream>
using namespace std;

struct Pair
{
    int min;
    int max;
};

struct Pair getMinMax(int arr[],int n)  
{
	 struct Pair minmax;
	 int i;
	 
	 if(n == 1){
	 	minmax.max = arr[0];
	 	minmax.min = arr[0];
	 	return minmax;
	 }
	 if (arr[0]>arr[1]){
	 	minmax.max = arr[0];
	 	minmax.min = arr[1];
	 }
	 else {
	   minmax.max =arr[1];
	   minmax.min = arr[0];
	 }
	 
	 for(i =2;i<n;i++)
	 {
	 	if(arr[i] > minmax.max){
	 		minmax.max = arr[i];
		 }
		 else if(arr[i]  < minmax.min){
		 	minmax.min = arr[i];
		 }
		 
	 }
	 return minmax;
}

 
 int main()
 {
 	int i,n;
 	int arr[n];
 	cin>>n;
    for(i =0;i<n;i++)
    {
    	cin>>arr[i];
	}
	struct Pair minmax = getMinMax(arr,n);
	
	cout<<"Maximum Element is: "<<minmax.max<<endl;
	cout<<"Minimum Element is: "<<minmax.min;

		return 0;
	}



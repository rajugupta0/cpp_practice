#include<iostream>
using namespace std;
int main()
{
	int m,n;
	cout<<"Enter m and n :";
	cin>>m>>n;
	int a[1000][1000] = {0};
	

    int val =1;
	
	for(int row =0;row<m-1;row++){
		for(int col=row;col<n-1;n--){
			a[row][col] = val;
			val = val +1;
			cout<<a[row][col]<<",";
		}
		cout<<endl;
	} 
	return 0;
}

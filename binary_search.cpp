#include<iostream>
using namespace std;

int binary_search(int a[],int n, int key){
	int s=0;
	int e=n-1;
	while(s<= e){
		int mid =(s + e)/2;
		if(	a[mid]== key){
			return mid;
		}
		else if(a[mid]>key){
			e =mid -1;
		}
		else 
		s= mid +1;
	}
	return -1;
}
int main() {
	int n,i,key;
	cin>>n;
	int a[100];
	for( i=0;i<n;i++){
		cin>>a[i];
	}
 	cout<<"Enter key: "<<endl;
 	cin>>key;
 	cout << binary_search(a,n,key)<<endl;
 	return 0;
 }

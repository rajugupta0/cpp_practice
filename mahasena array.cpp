#include<iostream>
using namespace std;
int main()
{
	int n,lucky = 0,unlucky = 0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++){
		if(a[i]%2==0)
		lucky++;
		else unlucky++;
	
	}
	if(lucky>unlucky)
	cout<<" READY FOR BATTLE"<<endl;
	else
	cout<<" NOT READY FOR BATTLE"<<endl;
	return 0;
}

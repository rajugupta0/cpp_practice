#include<iostream>
#include<cstring>
using namespace std;
//read the sentence/paragraph and check if it is palindrome or 
bool isPalindrome(char a[]){
	int i =0;
	int j =strlen(a) - 1;
	while (i<j) {
		if(a[i] == a[j]) {
			i++;
			j--;
		}
		else return false;
		
	}
	return true;
}
int main()
{
	char a[1000];
	cin.getline(a,1000);
	if(isPalindrome(a)){
		cout<<"Palindrome String ";
	}
	else cout<<"Not a Palindrome String ";
}

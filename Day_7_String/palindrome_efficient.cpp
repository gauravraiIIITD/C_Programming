#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i,j,n,count;
	char c[50];
	char col;
	cout<<"Enter the string : ";
	gets(c);
	n=strlen(c);
	for(i=0;i<n/2;i++){
			if(c[i]==c[n-i-1])
			{
				cout<<"Palindrome";
				return 1;
			}
			else
			{
				cout<<"Not Palindrome";
				return 0;
			}
		}
}




#include<iostream>
#include<math.h>
using namespace std;
int main()
 {
 	int i,n;
 	cout<<"Enter a number";
 	cin>>n;
 	for(i=2;i<=sqrt(n);i++)
	 {
 	   if(n%i==0)
		{
		  cout<<"Not a prime";	
		  return 1;
		}	
	 }
	 cout<<"prime";
 }

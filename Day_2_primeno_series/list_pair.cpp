#include<iostream>
#include<math.h>
using namespace std;
int main()
 {
 	int i,n;
 	cout<<"Enter a number";
 	cin>>n;
 	for(i=1;i<=sqrt(n);i++)
	 {
 	   if(n%i==0)
		{
	      cout<<"("<<i<<","<<n/i<<")";
		}	
	 }
	 
 }

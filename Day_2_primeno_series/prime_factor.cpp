#include<iostream>
#include<math.h>
using namespace std;
void prime(int n)
{
	int i,flag=1;
	for(i=2;i<=sqrt(n);i++)
	 {
 	   if(n%i==0)
		{
			flag=0;
	      break;
		}	
	 }
	 if(flag==1)cout<<n<<endl;
	
}
int main()
 {
 	int i,n;
 	cout<<"Enter a number";
 	cin>>n;
 	for(i=2;i<=sqrt(n);i++)
	 {
 	   if(n%i==0)
		{
	      //cout<<i<<endl;
	      prime(i);
		}	
	 }
	for(i=sqrt(n);i>=1;i--)
	 {
 	   if(n%i==0)
		{
	      //cout<<n/i<<endl;
		}	
	 }	 
	 
 }
 

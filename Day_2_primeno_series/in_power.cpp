#include<iostream>
#include<math.h>
using namespace std;
int main()
 {
 	int i,n,c;
 	cout<<"Enter a number";
 	cin>>n;
 	for(i=2;i<=sqrt(n);i++){
	c=0;	
	 while(n%i==0)
	 {
	 	c++;
	 	n=n/i;
	 }

	 if(c)
	 {
	   cout<<i<<"^"<<c<<endl;	
	 }
}
 }

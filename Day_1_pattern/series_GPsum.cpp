#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int a=2,r=2,n,s,t;
	cout<<"Enter a number";
	cin>>n;
	t=a*(pow(r,n-1));
	s=(a*(pow(r,n)-1))/(r-1);
	cout<<s;
}

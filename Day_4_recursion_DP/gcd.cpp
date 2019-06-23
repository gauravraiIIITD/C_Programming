#include<iostream>
using namespace std;
int gcd(int,int);
int main()
{
	int a,b,c,n,sum=0;
	cout<<"Enter two numbers";
	cin>>a>>b;
	c=gcd(a,b);
	cout<<"GCD will be :"<<c;
}
int gcd(int a,int b)
{
	if(a==b||b==a)
	{
	return a;
    }
    if(a>b)
    a=a-b;
	return gcd(b,a);
}

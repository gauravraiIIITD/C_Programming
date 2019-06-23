#include<iostream>
using namespace std;
int mul(int,int);
int main()
{
	int a,b,c,sum=0;
	cout<<"Enter two numbers to multiply";
	cin>>a>>b;
	c=mul(a,b);
	cout<<c;
}
int mul(int a,int b)
{
	if(a==0||b==0)
	{
		return 0;
	}
	else
	{
		return a+mul(a,b-1);
	}
}

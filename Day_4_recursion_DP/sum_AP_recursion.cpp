#include<iostream>
using namespace std;
int sum(int,int,int);
int main()
{
  int a,d,n,c=0;
  cout<<"Enter first term";
  cin>>a;
  cout<<"Enter the common difference";
  cin>>d;
  cout<<"Enter the limit term";
  cin>>n;
  c=sum(a,d,n);
  cout<<c;
}
int sum(int a,int d,int n)
{
	if(d==0)
	{
	return (a*n);
    }
	else
	{
	return a+sum(a,d,n-1);
   }
}

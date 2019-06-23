#include<iostream>
using namespace std;
int power(int,int);
int main()
{
 int a,b,c; 
 cout<<"enter two nummbers :";
 cin>>a>>b;
 c=power(a,b);
 cout<<"power value will be :"<<c;
}
int power(int a, int b)
{
	if(b<=0)
	return 1;
	return a*power(a,b-1);
}

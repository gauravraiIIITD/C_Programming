#include<iostream>
using namespace std;
int sum_digit(int);
int main()
{
 int a,b,c; 
 cout<<"enter the number :";
 cin>>a;
 c=sum_digit(a);
 cout<<"sum will be :"<<c;
}
int sum_digit(int a)
{
	if(a<=0)
	return 0;
	return a%10+sum_digit(a/10);
}

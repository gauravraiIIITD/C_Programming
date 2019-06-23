#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
	int i,j,n;
	cout<<"Enter the floating number :";
	cin>>n;
	int a[n];
	while(a[i]!='.')
	{
	if((a[i]<'0')||(a[i]>'9'))
	{
		cout<<"Not valid";
		return 1;
	}
	i++;
   }
   i++;
	while(a[i]!='e')
	{
	if((a[i]<'0')||(a[i]>'9'))
	{
		cout<<"Not valid";
		return 1;
	}
	i++;
	}
	i++;
	if((a[i]!='-')&&(a[i]!='+'))
	{
		cout<<"Not valid";
		return 1;
	}
	i++;
	while(a[i]!='\0')
	{
	if((a[i]<'0')||(a[i]>'9'))
	{
		cout<<"Not valid";
		return 1;
	}
	i++;
	}
	cout<<"valid";
}

#include<iostream>
using namespace std;
int main()
{
	int i,j,n,a[100];
	cout<<"Enter the size of the array";
	cin>>n;
	cout<<"Enter the element of the array";
	for(i=0;i<n;i++)
	{
	 cin>>a[i];
	}
	for(i=n-1;i>=0;i--)
	{
      if(a[i-1]<a[i])
      {
      	cout<<"";
	  }
    }
}

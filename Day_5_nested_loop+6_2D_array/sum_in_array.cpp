#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i,j,k,x,n,a[100];
	cout<<"Enter the size of the array :";
	cin>>n;
	cout<<"enter the number :";
	cin>>x;
	cout<<"enter the element of the array";
	for(k=0;k<n;k++)
	{
	cin>>a[k];
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i]+a[j]==x)
			{
				cout<<"yes";
				return 0;
			}
		}
	}
}


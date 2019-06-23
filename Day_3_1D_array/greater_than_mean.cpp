#include<iostream>
using namespace std;
int main()
{
	int i,n,x,sum=0,a[100];
	float mean;
	cout<<"Enter the size of the array";
	cin>>n;
	cout<<"Enter the element of the array";
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		sum=sum+a[i];
	}
	cout<<"sum will be :"<<sum;
	mean=sum/n;
	cout<<endl<<"mean will be :"<<mean<<endl;
	int count=0;
	for(i=1;i<=n;i++)
	{
		if(a[i]>mean)
		{
			count++;
		}
	}
	cout<<"numbers will be :"<<count;
}
	

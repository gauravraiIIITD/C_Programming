#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n,a[100],b[100];
	cout<<"Enter the size of the array";
	cin>>n;
	cout<<"Enter the element of first array";
	for(i=0;i<n;i++)
	{
	cin>>a[i];
	}
	cout<<"Enter the element of second array";
	for(j=0;j<n;j++)
	{
	cin>>b[j];
	}
	for(i=0;i<n;i++){
	int	count=0;
	 for(j=0;j<n;j++){
	if(a[i]!=b[j])
	{
     count++;
	}
}
	if(count==n){
	cout<<"The element will not be in second array is :"<<a[i];	
	}
}	
}

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i,j,k,m,n,a[50],b[50];
	cout<<"Enter the size of the array";
	cin>>n;
	for(i=0;i<n;i++)
	{
	cin>>a[i];
    }
    for(j=0;j<n;j++)
	{
	cin>>b[j];
    }
    int count=0;
	for(i=0;i<=n-1;i++){
		for(j=0;j<=n-1;j++){
		if((pow(a[i],b[j]))>(pow(b[j],a[i]))){
		count++;	
		}
	}
}
	cout<<count;
}

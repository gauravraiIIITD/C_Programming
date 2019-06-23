#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i,j,k,n,a[100];
	cout<<"Enter the size of the array";
	cin>>n;
	for(i=0;i<n;i++)
	{
	cin>>a[i];
	}
	for(i=0;i<=n-1;i++){
		for(j=0;j<=n-1;j++){
			for(k=0;k<=n-1;k++){
				if((i!=j)&&(j!=k)&&(i!=k)){
					if((a[i]*a[i]+a[j]*a[j])==(a[k]*a[k]))
					return true;
				}
			}
		}
	}
	return false;
}

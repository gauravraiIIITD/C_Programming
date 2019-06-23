#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i,j,k,n,a[100];
	int lsum=0;
	int rsum=0;
	cout<<"Enter the size of the array";
	cin>>n;
	cout<<"Enter the element of the array";
	for(k=0;k<n;k++)
	{
	cin>>a[k];
	}
	lsum=a[0];
	for(j=2;j<=n-1;j++)
	{
	rsum+=a[j];
    }
    for(i=2;i<=n-2;i++)
    {
    	lsum+=a[i-1];
    	rsum-=a[i];
    	if(lsum==rsum)
    	{
    		cout<<"value :"<<a[i]<<endl<<i;
    		break;
		}
    	
	}
}

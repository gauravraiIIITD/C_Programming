#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i,j,k,l,m,n,a[100];
	int n=9;
	int sum=0;
	for(i=0;i<n;i++)
	
	{
	  cin>>a[i];
	}
	cout<<" ";
	cin>>k;
	for(j=0;j<k;j++)
	{
	  cin>>a[j];	
	}
	cout<<endl;
	for(l=0;l<n;l++){
		for(m=0;m<n;m++){
	  if(a[i]!=a[i+1])
	  {
	  	sum+=4;
	  }
	  else
	  {
	  	sum+=2;
	  }
	}
    }
	cout<<sum;
}
 

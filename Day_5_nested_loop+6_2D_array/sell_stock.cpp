#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i,j,n,a[100],max=0;
	int count;
	cin>>n;
	for(i=0;i<n;i++)
	{
	  cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
	  count=0;
	  for(j=i+1;j<n;j++)
	  {
	  	if(a[i]>a[j])
		{
	  	if((a[i]-a[j])>max)
	  	{
	    max=(a[i]-a[j]);
	    count++;
	    cout<<"("<<i<<","<<j<<")";
		}
	    }
	    else
		{
		  i++;
		}
	 }
    }
    for(i=0;i<n;i++){
     for(j=i+1;j<n;j++){
     if(count==n-1)
	     {
	     	cout<<"No profit";
		 }	
	}
	  return 0;
}
}

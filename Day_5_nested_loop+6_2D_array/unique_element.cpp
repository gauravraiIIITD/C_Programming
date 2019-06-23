#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i,j,k,count,n,a[100],f[100];
	cout<<"Enter the size of the array :";
	cin>>n;
	cout<<"Enter the element of the array";
	for(i=0;i<n;i++)
	{
	cin>>a[i];
	f[i]=-1;
	}
	for(i=0;i<n;i++){
		count=1;
		for(j=i+1;j<n;j++){
			if(a[i]==a[j])
			{
			count++;
			f[j]=0;	
			}
		}
		if(f[i]!=0)
		{
			f[i]=count;
		}
		
	}
		cout<<"unique elements will be :"<<endl;
		for(i=0;i<n;i++)
		{
			if(f[i]==1)
			{
				cout<<a[i];
			}
		}
		return 0;
}

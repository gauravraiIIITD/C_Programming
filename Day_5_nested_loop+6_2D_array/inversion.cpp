#include<iostream>
using namespace std;
int inversion(int*,int);
int main()
{
	int k,n,a[100];
	cin>>n;
	for(k=0;k<n;k++)
	{
	cin>>a[k];
	}
	inversion(a,n);
	return 0;
}
int inversion(int a[],int n)
{
	int i,j,count=0;
	for(i=0;i<=n-1;i++){
		for(j=i+1;j<=n-1;j++){
			if(a[i]>a[j])
			count++;
		}
	}
     cout<<"Inversion will be :"<<count;
}


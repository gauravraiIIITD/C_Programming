#include<iostream>
using namespace std;

int main(){
    int i,j,n,p=0;
    cout<<"Enter a number";
    cin>>n;
    for(i=1;i<=n;i++)
	{
    	p=p+i;
    	int temp=p;
        for(j=1;j<=i;j++)
		{
        	cout<<temp;
        	cout<<" ";
        	temp--;
		}
		cout<<endl;	
	}
   }





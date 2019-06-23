#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a,b,i,n,sum=0;
	cout<<"Enter the length of the series";
	cin>>n;
	cout<<"Enter the first two terms";
	cin>>a>>b;
	cout<<a<<" "<<b<<" ";
	for(i=1;i<=(2*n);i++)
	{
		
		if(i%2==0){
			b=b*2;
			cout<<b<<" ";
			sum=sum+b;
		}else{
			a=a*3;
			cout<<a<<" ";
			sum=sum+a;
		}
	}
	cout<<"sum="<<sum<<endl;
	return 0;
}

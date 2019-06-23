#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i,n;
	cout<<"Enter a number";
	cin>>n;
	int step[n+1];
	step[0]=0;
	for(i=1;i<=n;i++)
	{
		if(i%2)
		{
			step[i]=step[i-1]+1;
		}
		else
		{
			step[i]=step[i/2]+1;
		}
	}
	cout<<"number of steps :"<<step[n];
}

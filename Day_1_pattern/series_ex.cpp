#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float term=1.0;
	float sum=0;
	int i=1;
	float x;
	float epsilon=10e-7;
	cout<<"Enter the postion number";
	cin>>x;
	while(term>epsilon)
	{
		sum+=term;
		term=(float)term*x/i;
		i=i+1;
	}
	cout<<sum;
}

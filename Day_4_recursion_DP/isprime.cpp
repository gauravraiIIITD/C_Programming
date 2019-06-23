#include<iostream>
#include<math.h>
using namespace std;
int isprime(int n,int i)
{
	if(n==2)
	return 1;
	if(n%i==0)
	return 0;
	if((i*i)>n)
	return 1;
	return isprime(n,i+1);
}
int main()
{
	int n;
	cin>>n;
	cout<<isprime(n,2);
}

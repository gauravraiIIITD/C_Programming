#include<iostream>
using namespace std;
int fact(int n);
int main()
{
	int i,j,n;
    int sum=0;
 	cout<<"Enter a number";
 	cin>>n;
 	while(n>0){
    i=n%10;
    n=n/10;
    j=fact(i);
    cout<<j<<"+";
 }
}
fact(int a)
{
 int k,c,fact=1;
 for(c=1;c<=a;c++)
 fact=fact*c;	
}

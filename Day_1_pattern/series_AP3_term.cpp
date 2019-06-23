#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int a,a1,a2,a3,a4,a5,d,n,s=0,t;
	cout<<"Enter a number";
	cin>>n;
	
	cout<<"Enter the first three terms";
	cin>>a1>>a2>>a3;
	cout<<a1<<a2<<a3;
	cout<<endl;
	cout<<"Common difference :";
	d=a2-a1;
	cout<<endl<<d<<endl;
	cout<<"The series will generate :";
	for(a=a1;a<=n;a=a+d){
		cout<<a<<endl;
	}
	cout<<endl;
	cout<<"sum of the series will be :";
	s=((n)*(2*a1+((n-1)*d)))/2;
	cout<<s;

}

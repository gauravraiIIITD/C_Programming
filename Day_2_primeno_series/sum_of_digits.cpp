#include<iostream>
#include<string.h>
using namespace std;
int main()
 {
 	int i,n;
    static int sum=0;
 	cout<<"Enter a number";
 	cin>>n;
 	while(n>0){
    i=n%10;
    n=n/10;
    sum=sum+i;
 }
  cout<<sum;
}

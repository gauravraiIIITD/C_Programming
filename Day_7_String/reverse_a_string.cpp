#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
	char c[50];
	int i,n;
	cout<<"Enter the string :"<<" ";
     gets(c);
	cout<<"reverse string will be :";
	cout<<endl;
	n=strlen(c);
	for(i=n-1;i>=0;i--)
    {
    	cout<<c[i];
	}
}

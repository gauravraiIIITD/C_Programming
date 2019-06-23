#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
	char c[50],d[50];
	int i,n;
	cout<<"Enter the string :"<<" ";
     gets(c);
	cout<<"upper string will be :";
	cout<<endl;
	n=strlen(c);
	for(i=0;i<n;i++)
    {
     d[i]=c[i]+'A'-'a';
     cout<<d[i];
	}
}

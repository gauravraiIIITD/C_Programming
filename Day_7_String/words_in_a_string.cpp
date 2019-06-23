#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i,j,n,count;
	char c[50];
	char col;
	cout<<"Enter the words : ";
	gets(c);
	n=strlen(c);
	count=1;
	for(i=0;i<n;i++)
	{
		if((c[i]==' ')&&(c[i+1]!=' '))
		{
		count++;	
    	}
    }
    cout<<"The number of words will be :"<<count;
}

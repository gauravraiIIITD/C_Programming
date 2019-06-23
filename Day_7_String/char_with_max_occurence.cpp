#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i,j,n;
	char c[50];
	int count,temp=0;
	string col;
	cout<<"Enter a string : ";
	gets(c);
	n=strlen(c);
	for(i=0;i<n;i++){
		count=0;
	for(j=0;j<n;j++){
	 if(c[i]==c[j])
	 count++;
	}
	if(count>temp)
	{
		temp=count;
		col=c[i];
	}	
}
   cout<<"Max time a character will present is :"<<temp<<endl;
   cout<<"Max occurance of the character is :"<<col;
}

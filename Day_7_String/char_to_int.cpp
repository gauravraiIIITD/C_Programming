#include<iostream>
#include<string.h>
using namespace std;
int myatoi(char*);
int main()
{
	int n;
	char c[50];
	gets(c);
    cout<<myatoi(c);
}
int myatoi(char x[])
{
	int i=0;
	int value=0;
	if((x[i]>='0')&&(x[i]<='9'))
	{
	while(x[i]!='\0')
	{
		value=value*10+x[i]-'0';
		i++;
	}
	return value;
    }
    else
    {
    	return -1;
	}
}

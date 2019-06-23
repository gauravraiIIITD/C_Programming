#include<iostream>
using namespace std;
int gstring(char*,int);
int main()
{
	int k;
	cin>>k;
	char str[k+1];
	str[k]='\0';
	gstring(str,k-1);
}
int gstring(char *s,int k)
{
	if(k==-1)
	{
		cout<<s<<endl;
		return 0;
	}
	s[k]='0';
	gstring(s,k-1);
	s[k]='1';
	gstring(s,k-1);
}

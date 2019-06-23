#include<iostream>
using namespace std;
void gstring(char*,int,int);
int main()
{
	int k;
	cin>>k;
	char str[k+1];
    gstring(str,0,k-1);
}
void gstring(char *s,int start,int end)
{
	if(start>end)
	{
		s[start]='\0';
		cout<<s<<endl;
		return;
	}
	s[start]='0';
	gstring(s,start+1,end);
	s[start]='1';
	gstring(s,start+1,end);
}

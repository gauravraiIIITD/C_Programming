#include<iostream>
using namespace std;
void gstring(char *,int,int);
int main()
{
	int k;
	cin>>k;
	char s[k+1];
	s[0]='0';
	gstring(s,1,k-1);
	s[0]='1';
	gstring(s,1,k-1);
}
void gstring(char *s,int present,int end)
{
	if(present>end)
	{
		s[present]='\0';
		cout<<s<<endl;
		return;
	}
	if(s[present-1]=='1')
	{
		s[present]='0';
		gstring(s,present+1,end);
	}
	else{
		s[present]='0';
		gstring(s,present+1,end);
		s[present]='1';
		gstring(s,present+1,end);
	}
	return;
}

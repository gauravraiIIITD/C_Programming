#include<iostream>
#include<string.h>
using namespace std;
int subs(char*,int);
int main()
{
	int i,j,k,n;
	int temp=0;
	int max=0;
	char c[50];
	gets(c);
    n=strlen(c);
    for(i=0;i<n;i++)
    {
    if((c[i]>='0'&&c[i]<='9')&&(c[i-1]>='0'&&c[i-1]<='9'))
      {
        temp=temp*10+(c[i]-'0');
        if(temp>max)
        {
          max=temp;
		}
	  }
	if((c[i]>='0'&&c[i]<='9')&&(c[i-1]<'0'||c[i-1]>'9'))
      {
        temp=(c[i]-'0');
        if(temp>max)
        {
          max=temp;
		}
	  }
	}
	cout<<max;
    return 0;
}



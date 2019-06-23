#include<iostream>
#include<string.h>
using namespace std;
int subs(char*,int);
int main()
{
	int n;
	char c[50];
	gets(c);
    n=strlen(c);
    subs(c,n);
    return 0;
}
 int subs(char c[],int n)
 {
 	int i,j,m;
 	for(i=0;i<=n;i++){
 		for(j=0;j<=n-i;j++){
 			int k=i+j-1;
 			for(m=j;m<=k;m++)
 			{
			 cout<<c[m];
			 }
			cout<<endl;
		 }
	}
 }




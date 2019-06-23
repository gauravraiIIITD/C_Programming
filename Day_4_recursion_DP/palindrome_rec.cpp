#include<iostream>
#include<string.h>
using namespace std;
void palindrome(char[],int);
int main()
{
  char c[100]; 
 cout<<"Enter the string";
 cin>>c;
 palindrome(c,0);
 return 0;
}
void palindrome(char c[],int i)
{
	int len=strlen(c)-(i+1);
	if(c[i]==c[len])
	{
		if(i+1==len||i==len)
		{
			cout<<"palindrome";
		}else{
	return palindrome(c,i+1);
     }
 }
	else
	{
		cout<<"NOT palindrome";
	}

}


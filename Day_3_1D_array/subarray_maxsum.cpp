#include<iostream>
using namespace std;
int main()
{
	int global_max=INT_MIN;
	int localmax=0,size=5,i;
	int a[5]={1,7,-10,4,2};
	for(i=0;i<size;i++)
	{
	localmax+=a[i];
	if(global_max<localmax)
	{
		global_max=localmax;
    }
		if(localmax<0)
		{
		
		localmax=0;
       }
	}
	cout<<global_max;
}


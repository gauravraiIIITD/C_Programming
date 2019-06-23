#include<iostream>
using namespace std;
const int length=100;
int main()
{
  int i,j;
  int array[100]={1}; 
  for(i=2;i<100;i++)
  {
  	for(j=i*i;j<100;j=j+i)
  	{
  		array[j-1]=1;
	}
  }
    for(i=1;i<100;i++)
  {
  	if(array[i-1]==0)
  	std::cout<<i<<endl;
  }
}

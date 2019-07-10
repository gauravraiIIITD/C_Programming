#include<iostream> 
#include<vector> 
#include<algorithm>  
using namespace std;  
int main() 
{ 
  vector<int> a{6, 5, 8, -5, 3, -7};
	for(auto i=a.begin();i!=a.end();i++)
	{
	    if(*i<0)
	    {
	     a.erase(i);
	    }
	  cout<<*i<<" ";
    }
}


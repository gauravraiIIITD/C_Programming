#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
	vector<int> a{1,4,3,2,9,7};
	for(auto i=a.begin();i!=a.end();i++)
	{
	    if(i!=min_element(i,a.end()))
	    swap(*i,*min_element(i+1,a.end()));
	    cout<<*i<<" ";
	}
}

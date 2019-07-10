#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	vector<int> a{1,2,3,4,5};
	vector<int> b{3,4,5,6};
	vector<int> v{a.size(),b.size()};
	
	vector <int> :: iterator it1;
	
	it1=set_union(a.begin(),a.end(),b.begin(),b.end(),v.begin());
	
	for(auto i=v.begin();i!=it1;i++)
	{
		cout<<*i<<" ";
	}
}

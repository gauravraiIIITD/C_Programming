#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
	vector<int> a{1,4,3,2,9,7};
	sort(a.begin(),a.end(),greater<int>());
	for(auto i: a)
	{
	  cout<<i<<" ";
	}
}

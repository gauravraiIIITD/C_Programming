#include<iostream> 
#include<vector> 
using namespace std; 
int main() 
{ 
	vector<vector<int>> a{{1,2,3}, 
						  {4,5,6},
						  {7,8,9}}; 
	for (int i=0; i<a.size(); i++) 
	{ 
		for (int j=0; j<a.size() ;j++) 
			cout << a[i][j] << " "; 
		cout << endl; 
	} 
} 


#include<iostream> 
#include<vector> 
#include<algorithm> 
using namespace std; 
int main() 
{ 
	vector< vector<int> > a{{3, 5, 1}, 
							{4, 8, 6}, 
							{7, 2, 9}}; 
	int m = a.size();  
	cout << "matrix will be:\n"; 
	for (int i=0; i<m; i++) 
	{ 
	    int n = a[i].size();
	    sort(a[i].begin(), a[i].end()); 
		for (int j=0; j<n ;j++) 
			cout << a[i][j] << " "; 
		cout << endl; 
	}  
} 

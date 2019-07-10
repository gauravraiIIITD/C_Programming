#include<iostream> 
#include<vector> 
#include<algorithm>  
using namespace std;  
bool sortcol( const vector<int>& v1, 
			const vector<int>& v2 ) { 
return v1[0] < v2[0]; 
}
int main() 
{ 
	vector<vector<int> > a{{6, 5, 8}, 
								{4, 8, 6}, 
								{7, 2, 9}}; 
	int m = a.size();
    int n = a[0].size();
	cout << "matrix will be:\n"; 
	for (int i=0; i<m; i++) 
	{ 
	sort(a.begin(), a.end(),sortcol);
		for (int j=0; j<n ;j++){
			cout << a[i][j] << " "; 
		}
		cout<<endl;
	} 
}


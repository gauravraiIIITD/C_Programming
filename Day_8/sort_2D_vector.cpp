#include<iostream> 
#include<vector>  
#include<algorithm> 
using namespace std; 
bool sizecom(const vector<int>& v1, const vector<int>& v2) 
{ 
	return v1.size()<v2.size(); 
} 
int main() 
{ 
	vector< vector<int> > a{{4,5,6}, 
							{8}, 
							{6,7}}; 
	sort(a.begin(), a.end(), sizecom); 
	cout << "The sorted matrix is:\n"; 
	for (int i=0; i<a.size(); i++) 
	{ 
		for (int j=0; j<a[i].size() ;j++) 
			cout <<a[i][j] << " "; 
		cout << endl; 
	} 
} 


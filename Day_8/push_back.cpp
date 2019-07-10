#include <iostream> 
#include <vector> 
using namespace std; 

int main() 
{ 
	vector<int> a{ 1, 2, 3, 4, 5 }; 
	a.push_back(6); 
	for (auto i= a.begin(); i!=a.end(); ++i) 
		cout << ' ' << *i; 
} 


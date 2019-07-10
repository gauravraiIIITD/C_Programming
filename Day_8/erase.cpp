#include <iostream> 
#include <vector> 
using namespace std; 
int main() 
{ 
	vector<int> a{ 1, 2, 3, 4, 5 }; 
	vector<int>::iterator a1,a2; 
	a1 = a.begin(); 
	a2 = a.end(); 
	a2--; 
	a1++;
	a.erase(a1, a2); 
	for (auto i=a.begin(); i!= a.end(); ++i) 
		cout << ' ' << *i; 
} 


#include <iostream> 
#include <vector> 
using namespace std; 

int main() 
{ 
	vector<string> a{"Hello World"}; 
	for (auto i= a.begin(); i!=a.end(); ++i) 
		cout << ' ' << *i; 
} 


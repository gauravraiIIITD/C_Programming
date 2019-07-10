#include <iostream> 
#include <vector> 
using namespace std; 

int main() 
{ 
	vector<int> a1{1,2,3,4}; 
	vector<int> a2{5,6,7,8}; 
	a1.swap(a2);
	for (auto i= a1.begin(); i!=a1.end(); ++i) 
		cout << ' ' << *i; 
		cout<<endl;
	for (auto i= a2.begin(); i!=a2.end(); ++i) 
		cout << ' ' << *i; 
		cout<<endl;
} 


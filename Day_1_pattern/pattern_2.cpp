#include<iostream>
using namespace std;

int main(){
    int i,j,n,p=1;
    cout<<"Enter a number";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
        	cout<<p;
        	p++;
			}
		cout<<endl;	
   }
}




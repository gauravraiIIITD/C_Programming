#include<iostream>
using namespace std;

int main(){
    int i,j,n,p=0;
    cout<<"Enter a number";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
        	p=p%2;
        	cout<<p;
        	p++;
			}
		cout<<endl;	
   }
}




#include<iostream>
using namespace std;
int main(){
    int i,j,k,n;
    cout<<"Enter a number";
    cin>>n;
  
    for(i=1;i<=n;i++){
        for(j=i;j<n;j++){
        cout<<" ";
    }
    for(k=1;k<(i*2);k++){
        	cout<<"*";
        		}
		cout<<endl;
      }
        for(i=n-1;i>=1;i--){
        for(j=n;j>i;j--){
        cout<<" ";
    }
    for(k=1;k<(i*2);k++){
        	cout<<"*";
        		}
		cout<<endl;
      }
}

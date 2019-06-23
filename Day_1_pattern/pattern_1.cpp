#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter a number";
    cin>>n;
    int p=0;
    for(i=0;i<=n;i++){
        for(j=0;j<=p;j++)
        cout<<"*";
        cout<<endl;
        p+=1;
    }
}

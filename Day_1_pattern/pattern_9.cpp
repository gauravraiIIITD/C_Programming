#include<iostream>
using namespace std;

int main(){
    int i,j,n;
    cout<<"Enter a number";
    cin>>n;
    for(i=1;i<=n;i++)
	{
        for(j=i;j<n;j++){
        	cout<<" ";
		}
		for(j=1;j<=(2*i-1);j++){
			if((j==1)||j==(2*i-1)){
				cout<<"*";
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
}
    for(i=1;i<=n;i++)
	{
        for(j=1;j<i;j++){
        	cout<<" ";
		}
		for(j=1;j<=(n*2-(2*i-1));j++){
			if(j==1||j==(n*2-(2*i-1))){
				cout<<"*";
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
}
}

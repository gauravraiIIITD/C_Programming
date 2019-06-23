#include<iostream>
using namespace std;

int main(){
    int i,j,n,p=1;
    cout<<"Enter a number";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
        	if((i%2==0)&&(j%2!=0)||(i%2!=0)&&(j%2==0)){
        	cout<<"-"<<p;
        	p++;
			}else{
			cout<<" "<<p;
			p++;
			}
			}
		cout<<endl;	
   }
}





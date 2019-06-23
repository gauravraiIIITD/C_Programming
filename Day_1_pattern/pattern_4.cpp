#include<iostream>
using namespace std;

int main(){
    int i,j,n,count=0,value;
    cout<<"Enter a number";
    cin>>n;
    for(i=1;i<=n;i++)
	{
		if(i&1){
		value=count+1;
		}
		else{
			value=count+i;
		}
        for(j=1;j<=i;j++)
		{
			cout<<value;
			if(i&1)
			value++;
		    else
			value--;
            count++;
}
	    
		cout<<endl;	 
   }
}






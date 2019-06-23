#include<iostream>
using namespace std;
int main()
{
	int i,j,n,m,a[100],b[100],c[100];
	float k;
	cout<<"Enter the number of batsman";
	cin>>n;
	cout<<"Enter the run of the batsman";
	for(i=0;i<n;i++)
	{
	cin>>a[i];
    }
    cout<<"Enter the ball played by the batsman";
	for(i=0;i<n;i++)
	{
	cin>>b[i];
    }
    int max=0;
   	for(i=0;i<n;i++){
	     {
	     	k=((float)a[i]/(float)b[i]);
	     	if(k>max)
	     	max=k;
		 }
		 	
    }
    cout<<max*100<<endl;
}

    




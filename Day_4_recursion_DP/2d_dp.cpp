#include<iostream>
using namespace std;
int main()
{
  int i,j,n,m,a[50][50];
  cin>>m>>n;
  for(i=0;i<=n;i++){
  a[0][i]=1;
}
  for(i=0;i<=m;i++){
  a[i][0]=1;
}
  for(i=1;i<=m;i++){
    for(i=1;i<=n;i++){
  a[i][j]=a[i-1][j-1]+2*a[i][j-1];
}
}
cout<<a[m][n];
}

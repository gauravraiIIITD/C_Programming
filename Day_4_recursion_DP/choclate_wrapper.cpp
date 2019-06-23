#include<iostream>
#include<math.h>
using namespace std;
int f(int,int,int);
int rec_wrap(int);
int main()
{
	int money,price,wrap;
	cin>>money>>price>>wrap;
	cout<<f(money,price,wrap);   
}
int rec_wrap(int num_choc,int wrap)
{
	if(num_choc<wrap)
	return 0;
	int new_num=num_choc/wrap;
	return new_num+(rec_wrap(new_num+(num_choc%wrap),wrap));
}
int f(int money,int price,int wrap)
{
	int num_choc=money/price;
	return (num_choc+rec_wrap(num_choc,wrap));
}


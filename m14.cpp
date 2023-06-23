#include<iostream>
using namespace std;
int main()
{
	int a[5],i,b[5],sum;
	for(i=0;i<5;i++)
	{
		cout<<"enter val a:";
		cin>>a[i];
		cout<<" enter val b:";
		cin>>b[i];
	}
	cout<<"a\tb\tsum";
	for(i=0;i<5;i++)
	{
		sum=a[i]+b[i];
		cout<<" \n"<<a[i]<<"\t"<<b[i]<<"\t"<<sum;
	}
	return 0;
}
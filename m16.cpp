#include<iostream>
using namespace std;
int main()
{
	int a[5],i,evensum=0,oddsum=0,totalsum=0;
	for(i=0;i<5;i++)
	{
		cout<<"enter val a: ";
		cin>>a[i];
	}
	for(i=0;i<5;i++)
	{
		if(a[i]%2==0)
		{
			evensum+=a[i];
		}
		else
		{
			oddsum+=a[i];
		}
		totalsum=evensum+oddsum;
	}
	cout<<" \n evensum ="<<evensum;
	cout<<"\n oddsum="<<oddsum;
	cout<<"\n totalsum="<<totalsum;
	return 0;
}
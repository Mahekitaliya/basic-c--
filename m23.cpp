#include<iostream>
using namespace std;
int main()
{
	int i,j,a[5][5],b[5][5],total=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"enter val:";
			cin>>a[i][j];
		}
	}
	cout<<"sparse matrix\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		if(a[i][j]==0)
			cout<<" ";
		else
			cout<<a[i][j];
		}
		cout<<"\n";
	}
	return 0;
}
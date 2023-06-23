#include<iostream>
using namespace std;
int main()
{
	int a[5][5],i,j,b[5][5],c[5][5];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"enter val a:";
			cin>>a[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"enter val b:";
			cin>>b[i][j];
		}

	}
	cout<<"matrixa\t\tmatrixb\t\tsum";
	for(i=0;i<3;i++)
	{
		cout<<"\n";
		for(j=0;j<3;j++)
		{
			cout<< a[i][j];
		}
		cout<<"\t\t";
		for(j=0;j<3;j++)
		{
			cout<< b[i][j];
		}
			cout<<"\t\t";
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			cout<< c[i][j];
		}
	}
	return 0;
}
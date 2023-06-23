#include<iostream>
using namespace std;
int main()
{
	int i,j,a[5][5],b[5][5],total=0;
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
			cout<<"  "<<a[i][j];
		}
		cout<<"\n";
	}
	cout<<"lower triangle total\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i>j)
			total+=a[i][j];
		}
	}
	cout<<" "<<total;
	return 0;
}
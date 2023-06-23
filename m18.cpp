#include<iostream>
using namespace std;
int main()
{
	int i,a[5][5],b[5][5],j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"enter val a:";
			cin>> a[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<" "<<a[i][j];
		}
		cout<<"\n";
	}
	cout<<"transport matrix\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"  "<<a[j][i];
		}
		cout<<"\n";
	}
	return 0;
}
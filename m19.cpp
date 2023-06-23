#include<iostream>
using namespace std;
int main()
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			cout<<"1 ";
			else
			cout<<"0 ";
		}
		cout<<"\n";
	}
	return 0;
}
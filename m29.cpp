#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter n:";
	cin>>n;
	if(n>18)
	{
		cout<<"eligible for voting";
	}
	else
	{
		cout<<"not eligible for voting";
	}
	return 0;
}
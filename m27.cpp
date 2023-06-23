#include<iostream>
using namespace std;

int main()
{
	float maths,eng,che,phy,total,present,marks;
	cout<<" enter maths marks:";
	cin>>maths;
	cout<<"\nenter english marks:";
	cin>>eng;
	cout<<" \n enter che marks:";
	cin>>che;
	cout<<" \n enter phy marks:";
	cin>>phy;
	total=maths+eng+che+phy;
	cout<<"\n total=%f"<<total;
	present=total/400*100;
	cout<<"\n present=%f"<<present;
	if(maths<35||eng<35||phy<35||che<35|| present<35)
	{
		cout<<"\n Fail";
	}
	else if(present>=75)
	{
		cout<<"\n grade A";
	}
	else if(present>=60)
	{
		cout<<"\n grade B";
	}
	else if(present>=45)
	{
		cout<<"\n grade C";
	}
	else
	{
		cout<<"\n Pass";
	}
	
	return 0;
}
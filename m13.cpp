#include<iostream>
using namespace std;
int main()
{
int a,bill ;
cout<<"Enter the UNIT:";
cin>>a;

	if(a<=100)
	{
		bill = 50 + a*0.6;
		cout<<"Your BILL is "<<bill;
		cout<<" rs per unit.";
	}
	else if(100<a && a<=300)
	{
		bill = 50 + 60+ (a-100)*0.8;
	     cout<<"Your BILL is "<<bill;
	     cout<<" rs per unit";
	}
	else 
	{
		bill = 50 + 60 + 160 + (a-300)*0.9;     
		cout<<"Your BILL is "<<bill;
		cout<<"re per unit";
	}

	if(bill>300)
	{
		bill = bill + (bill*0.15);
        cout<<"\nYour BILL is %d "<<bill;
        cout<<" rs per unit with 15% bill";
	}

   return 0;
}
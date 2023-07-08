#include<iostream>
using namespace std;
class bank
{
	int tbalance=5000,damt,wamt;
	public:
	void deposite()
	{
		cout<<"enter deposite amt:";
		cin>>damt;
		tbalance+=damt;
		cout<<"your deposite amout is:"<<damt<<endl;
	}
	void withdrawal()
	{
		cout<<"enter withdrawal amt:";
		cin>>wamt;
		if(tbalance<wamt)
		{
			cout<<"sorry not withdrawal amout"<<endl;
		}
		else
		{
			tbalance-=wamt;
			cout<<"your withdrawal amout is:"<<wamt<<endl;
		}
	}
	void showdata()
	{
		cout<<"tbalance"<<tbalance<<endl;
	}
};
int main()
{
	bank b;
	int ch;
	cout<<"1.deposite amount:"<<endl;
	cout<<"2.withdrawal amout:"<<endl;
	cout<<"3.show balance:"<<endl;
	cout<<"0.exit:"<<endl;
	do
	{
		cout<<"enter choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:
			b.deposite();
			break;
			case 2:
			b.withdrawal();
			break;
			case 3:
			b.showdata();
			case 0:
			break;
			default:
				cout<<"wrong choice"<<endl;
				break;
		}
	}while(ch!=0);
}
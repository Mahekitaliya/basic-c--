#include<iostream>
using namespace std;
class BOOK
{
	int n;
	int bon;
	char bt[20];
	float p;
	float cost;
	float TOTAL_COST(int n)
	{
		return n*p;
	}
	public:
void INPUT()
{
	cout<<"enetr book no:";
	cin>>bon;
	cout<<"enter book titlte:";
	cin>>bt;
	cout<<"enter price:";	
	cin>>p;
}
void PURCHASE()
{
	cout<<"enter number of book:";
	cin>>n;
	cout<<"BOOK NO:"<<bon<<endl;
	cout<<"BOOK TITLE:"<<bt<<endl;
	cout<<"PRICE:"<<p<<endl;
	cost=TOTAL_COST(n);
	cout<<"TOTAL PRIZE:"<<cost;
}
};
int main()
{
	BOOK b;
	b.INPUT();
	b.PURCHASE();
}
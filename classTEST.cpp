#include<iostream>
using namespace std;
class TEST
{
	int testcode;
	char des[20];
	int noca;
	int center;
	float CALCNTER()
	{
		return noca/100+1;
	}
	public:
void SCHEDULE()
{
	cout<<"enter testcode:";
	cin>>testcode;
	cout<<"enter discription:";
	cin>>des;
	cout<<"enter Nocandidate:";
	cin>>noca;
	center=CALCNTER();
}
void DISPTEST()
{
	cout<<"\n";
	cout<<"testcode:"<<testcode<<endl;
	cout<<"discription:"<<des<<endl;
	cout<<"Nocandidate:"<<noca<<endl;
	cout<<"centerreqd:"<<center<<endl;
}
};
int main()
{
	TEST t;
	t.SCHEDULE();
	t.DISPTEST();
}
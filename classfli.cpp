#include<iostream>
using namespace std;
class fli
{
	int fn;
	char des[50];
	float dis;
	float fule;
	float CALFUEL()
	{
	if(dis<=1000)
		return fule=500;
	else if(dis>=1000&&dis<=2000)
		return fule=1100;
	else
		return fule=2200;
	}
	public:
void FEEDINFO()
{
	cout<<"enter Flight number:";
	cin>>fn;
	cout<<"enter Destination:";
	cin>>des;
	cout<<"enter Distance:";
	cin>>dis;
	fule=CALFUEL();
}
void SHOWINFO()
{
	cout<<"\n";
	cout<<"Flight number:"<<fn<<endl;
	cout<<"Destination:"<<des<<endl;
	cout<<"Distance:"<<dis<<endl;
	cout<<"fule:"<<fule<<endl;
}
};
int main()
{
	fli f;
	f.FEEDINFO();
	f.SHOWINFO();
}
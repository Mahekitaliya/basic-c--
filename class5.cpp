#include<iostream>
using namespace std;
class test{
	int m,c,p,total;
	float pr;
	public:
	test()
	{
		cout<<"enter maths marks:";
		cin>>m;
		cout<<"enter chemistry marks:";
		cin>>c;
		cout<<"enter physics marks:";
		cin>>p;
	}
	void setdata()
	{
		cout<<"maths:"<<m<<endl;
		cout<<"chemistry:"<<c<<endl;
		cout<<"physics:"<<p<<endl;
		total=m+c+p;
		cout<<"total:"<<total<<endl;
		pr=total/3;
		cout<<"pr:"<<pr<<endl;
	}
};
int main()
{
	test t;
	t.setdata();
}
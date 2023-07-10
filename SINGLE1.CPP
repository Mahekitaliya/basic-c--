#include<iostream>
using namespace std;
class base
{
	protected:
	int n;
	int i,j=1;
	public:
	void setn()
	{
		cout<<"enter n:";
		cin>>n;
	}			
};
class derived:public base
{
	public:
	void getn()
	{
		for(i=1;i<=n;i++)
		{
			j=j*i;
		}
        cout<<"\t"<<j;
        
	}
};
int main()
{
	 derived d;
	d.setn();
	d.getn();
}
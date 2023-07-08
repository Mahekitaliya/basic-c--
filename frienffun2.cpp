#include<iostream>
using namespace std;
class Max{
	int a,b;
	friend void add(Max);
	public:
	void setdata()
	{
		cout<<"enter a:";
		cin>>a;
		cout<<"enter b:";
		cin>>b;
	}
};
void add(Max x)
{
    if(x.a >x.b){
        cout<<"Max: "<<x.a;
    }
    else
        cout<<"Max: "<<x.b;
}
int main()
{
	Max x;
	x.setdata();
	add(x);
}
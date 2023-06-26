#include<iostream>
using namespace std ;
class resulte
{
    private:
    int maths,eng,che,phy,total,marks;
    float present;
    public:
    
    void setdata()
    {
    
	cout<<"enter maths marks:";
	cin>>maths;
	cout<<"enter english marks:";
	cin>>eng;
	cout<<"enter che marks";
    cin>>che;
	cout<<"enter phy marks:";
	cin>>phy;
    }
    void claculation()
    {
	total=maths+eng+che+phy;
	cout<<" total"<<total;
	present=total/4;
	cout<<" present"<<present;
    }
    void dis()
    {
	if(maths<35||eng<35||phy<35||che<35|| present<35)
	{
		cout<<" Fail";
	}
	else if(present>=75)
	{
		cout<<"grade A";
	}
	else if(present>=60)
	{
		cout<<" grade B";
	}
	else if(present>=45)
	{
		cout<<" grade C";
	}
	else
	{
		cout<<" Pass";
	}
    }
    void print()
    {
       cout<<"maths<<\tche\tphy\teng\tpresent"<<endl;

       cout<<maths<<"\t"<<che<<"\t"<<phy<<"\t"<<eng<<"\t"<<present;


        
    }
};
    int main()
    {
        resulte m ;
        m.setdata();
        m.claculation();
        m.dis();
    }
	
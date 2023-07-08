#include<iostream>
using namespace std;
class box{
    int l,w,h;
    public :
    void satdata(int a,int b,int c)
    {
    l = a;
    w = b;
    h = c;
    }
int getdata()
{
    return l*w*h;
}
friend box operator+(box m,box n)
{
    box t;
    t.l = m.l + n.l;
    t.w = m.w + n.w;
    t.h = m.h + n.h;
    return t;
    }
};
int main()
{
    box a,b,c;
    b.setdata(2,2,2);
    cout<<"volume of box B is :"<<b.getdata()<<endl;
    a.setdata(3,3,3);
    cout<<"volume of box A is :"<<a.getdata()<<endl;
     c = a+b;
     cout<<"volume of box C is :"<<c.getdata()<<endl;
}
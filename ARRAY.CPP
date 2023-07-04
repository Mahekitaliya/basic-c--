#include<iostream>
using namespacestd;
class test
{
    int n;
    public :
    void setn();
    void grtn();
    {
        cout<<"value of n :"<<n<<endl;

    }
};
void test :: setn()
{
    cout<<"Enter n :";
    cin>>n;

}
int main()
{
    test a[5];
    int i;
    for(i=0;i<3;i++)
    {
        cout<<"no :"<<i++<<endl;
        a[i].setn();

    }
    for(i=0;i<3;i++)
    {
        cout<<"no :"<<i++<<endl;
        a[i].getn();
        
    }
}

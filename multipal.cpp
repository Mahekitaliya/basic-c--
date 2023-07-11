#include<iostream>
using namespace std;
class base1{
    protected :
    int m ;
    public :
    void setM()
    {
        cout<<"Enter m :";
        cin>>m;

    }

};
class  base2{
    protected :
    int n ;
    public :
    void setN(){
        cout<<"enter n: ";
        cin>>n;
    }

    
};
class dervied : public base1, public base2{
    public:
    void product(){
        cout<<"product of m and n is :"<<m*n<<endl;
    }
};
int main()
{
    dervied d ;
    d.setM();
    d.setN() ;
    d.product() ;
}
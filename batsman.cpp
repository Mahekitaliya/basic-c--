#include<iostream>
using namespace std;
class batsman{
    int code;
    char name[20];
    int innings,notout,runs;
    int batevg;
    calcavg()
    {
        return runs/(innings-notout);
    } 
    public:
    readdata()
    {
        cout<<"code:";
        cin>>code;
        cout<<"name:";
        cin>>name;
        cout<<"innings:";
        cin>>innings;
        cout<<"notout :";
        cin>>notout;
        cout<<"runs :";
        cin>>runs;
        batevg = calcavg();
    }
    displaydata()
    {
        cout<<"code= "<<code<<endl;
        cout<<"name= "<<name<<endl;
        cout<<"innings= "<<innings<<endl;
        cout<<"notout= "<<notout<<endl;
        cout<<"runs= "<<runs<<endl;
        cout<<"batevg= "<<batevg<<endl;

    }

};
int main()
{
    batsman k;
    k.readdata();
    k.displaydata();
}
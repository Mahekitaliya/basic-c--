#include<iostream>
using namespace std ;
int main()

{
    int n,m; 
    cout<<"Enter n :";
    cin>>n;
    cout<<"Enter m :";
    cin>>m;

    if(n*m%3==0&&n*m%7==0)
    {
        cout<<"\n divisble by 3 or 7 ";

    }
    else
    {
        cout<<"\n  not divisble by 3 or 7";
    }


}
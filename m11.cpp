#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter n =";
    cin>>n;
    cout<<"Enter m =";
    cin>>m;
    if(n*m%n+m==0)
    {
        cout<<"\n multipication is divisble by their addition";
    }
    else{
        cout<<"\n multipication is  not divisble by their addition";
    }

}
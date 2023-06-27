#include<iostream>
using namespace std;
class student{
    private :
    int number;
    char name[20];
    float english,maths,science,total;
    float ctotal(){
        return english+maths+science;
    }
    public:
    void takedata()
    
        {
        cout<<"enter number:";
	    cin>>number;
        cout<<"enter name:";
	    cin>>name;
	    cout<<"enter english marks:";
	    cin>>english;
	    cout<<"enter maths marks";
        cin>>maths;
	    cout<<"enter science marks:";
	    cin>>science;
        total= ctotal();
        }
    void showdata()
    {
           
            cout<<" number"<<number<<endl;
             cout<<" name"<<name<<endl;
            cout<<" english"<<english<<endl;
            cout<<" maths"<<maths<<endl;
           cout<<" science"<<science<<endl; 
            cout<<"total"<<total<<endl;




        }
};
int main()
{
    student h;
    h.takedata();
    h.showdata();

}
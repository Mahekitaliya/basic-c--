#include<iostream>
using namespace std;
class REPORT{
    int i;
    int adno;
    char namr[20];
    float marks[5];
    float av,total=0;
    float GETAV()
    {
     
        total+=marks[i];
        return total;
        
    }
    }
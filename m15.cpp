#include<iostream>
using namespace std;
int main()
{
	int i,eng[5],che[5],phy[5],total=0;
	float pr;
	for(i=0;i<5;i++)
	{
		cout<<" enter eng marks:";
		cin>>eng[i];
		cout<<" enter che marks:";
		cin>>che[i];
		cout<<" enter phy marks:";
		cin>>phy[i];
		
	}
	cout<<"eng\tche\tphy\ttotal\tpr\t grade\t";
	for(i=0;i<5;i++)
	{
		total=eng[i]+che[i]+phy[i];
		pr=total/3;
		cout<<"\n"<<eng[i]<<"\t"<<che[i]<<"\t"<<phy[i]<<"\t"<<total<<"\t"<<float(pr)<<"\t";
		if(eng[i]<35||phy[i]<35||che[i]<35|| pr<35)
			cout<<"   fail";
		else if(pr>=75)
			cout<<"  grade a";
		else if(pr>=60)
			cout<<" grade b";
		 else if(pr>=45)
			cout<<" grade c";
		else
			cout<<" pass";
	}
	return 0;
}
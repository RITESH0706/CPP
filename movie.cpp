#include<iostream>
#include<iomanip>
using namespace std;

class Movie{
	string name;
	int atp,ctp,na,nc,ga;

public:
	void setData()
	{
		cout<<"Enter Adult ticket price:";
		cin>>atp;
		cout<<"Enter Child ticket price:";
		cin>>ctp;
	}
	void getData()
	{
		cout<<"Enter Movie Name:";
		cin>>name;
		cout<<"Enter adults:";
		cin>>na;
		cout<<"Enter childs:";
		cin>>nc;
	}
	
	int ticket()
	{
		cout<<endl;
		cout<<"Movie name:"<<name<<endl;
		cout<<"Adults:"<<na<<"price:"<<atp<<"Total amount:"<<na*atp<<endl;
		cout<<"Childs:"<<nc<<"price:"<<ctp<<"Total amount:"<<nc*ctp<<endl;
		ga=na*atp+nc*ctp;
		cout<<"gross amount:"<<ga<<endl;
		cout<<"Charity:"<<ga*0.1<<endl;
		
	}
};

int main()
{
	Movie m;
	m.setData();
	m.getData();
	m.ticket();
}
	


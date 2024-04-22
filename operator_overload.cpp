#include<iostream>
#include<string>
#include<list>
using namespace std;

class Youtube_channel
{	
	string name;
	int subscribers;
	
	public:
		Youtube_channel(string nm,int user)
			{
				name=nm;
				subscribers=user;
			}
};
class Mylist
{
	public:
		list<Youtube_channel>mylist;
		void operator+=(Youtube_channel& channel)
		{
			mylist.push_back(channel);			
		}			
};
int main()
{
	Youtube_channel yc1("dkte",5000);
	Youtube_channel yc2("CSE",2000);
  
  Mylist ml;
  ml+=yc1;
  
  return 0;	
}


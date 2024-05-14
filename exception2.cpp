#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	cout<<"enter the value for num1 & num2"<<endl;
	cin>>num1>>num2;
	cout<<"\nstar\n";
	try
	{
		cout<<"inside try block"<<endl;
		if(num2==0)
		{
			throw num2;
			cout<<"this will not execute";
		}
		else
		{
			float result=(float)num1/num2;
			cout<<"division of given num :"<<result<<endl;
		}
	}
	catch(int i)
	{
		cout<<"caught an exception trying to divide by zero";
		cout<<i<<"\n";
	}
	cout<<"end"<<endl;
}

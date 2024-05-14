#include<iostream>
#define m 4
using namespace std;
class Line{
	public:
		int x1,x2,x3,x4;
		Line(int x,int y,int a,int b)
		{
			x1=x;
			x2=y;
			x3=a;
			x4=b;
		
			
		}
};
class maths{
	public:
	 bool isTangent(int x1,int x2,int y1,int y2)
	 {
	 	if(y2-y1==m*(x2-x1))
	 	{
	 		return true;
		 }
		 else
		 {
		 	return false;
		 }
		 
	 }
	 bool isTangent(float slope,float inter){
	 	
	 	if(slope>=25&&inter>=20)
	 	{
	 		return true;
		 }
		 else
		 {
		 	return false;
		 }
	 }
	 bool isTangent(Line l1)
	 {
	 if(l1.x1=l1.x2)
	 {
	 	return false; 
		 }
	 else
	 {
	 	return true;
			  }	 	
	 	
	 }
};

int main()
{
	Line l1(21,5,8,4);
	maths m1;
	cout<<m1.isTangent(4,8,2,4);
	cout<<m1.isTangent(22.5,15.7);
	cout<<m1.isTangent(l1);
	
	
}

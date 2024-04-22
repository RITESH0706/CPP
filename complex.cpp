

#include <iostream>
using namespace std;
 
class Complex {
public:
    int real, imag;
 
public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }
 
    
    Complex operator+(Complex const& obj)
    {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }


    
void print()
 {

 cout << "Addition is: "<<real << " + i" << imag << '\n';
 }

};
 
int main()

{

Complex c1,c2,c3;

cout<<"Enter real and img no"<<endl;
cin>>c1.real;
cin>>c1.imag;

 
cout<<"Enter real and img no"<<endl;
cin>>c2.real;
cin>>c2.imag;


c3 = c1 + c2;
//c3 = c1 - c2;
 c3.print();
}


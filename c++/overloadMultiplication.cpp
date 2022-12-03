//wap to overload multiplicationn operator to multiply 2 complex number.
#include<iostream>
using namespace std;

class Complex
{
    int real,img;
    public:
        Complex()
        {}
        Complex(int real,int img)
        {
            this->real=real;
            this->img=img;
        }
        void display()
        {
            cout<<"Real="<<real<<endl<<"Imaginary="<<img<<endl;
        }
        Complex operator * (Complex);
};
Complex Complex::operator*(Complex c2)
{
    Complex c;
    c.real = this->real * c2.real;
    c.img = this->img * c2.img;
    return c;
}

int main()
{
Complex c1(10,20),c2(30,40),c3;
c1.display();
c2.display();
c3=c1*c2;
cout<<"Resultant Complex no. after multiplication:\n";
c3.display();
return 0;
}
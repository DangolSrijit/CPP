#include<iostream>
using namespace std;
class Complex
{
    int real,img;
    public:
        Complex()
        {
            real=0;
            img=0;
        }
        Complex(int real1 ,int img1)
        {
            real=real1;
            img=img1;
        }
        void display();
        Complex add(Complex);
};
int main()
{
    Complex c1(10,20),c2(5,10),c3;
    cout<<"First complex number is:"<<endl;
    c1.display();
    cout<<"Second complex number is:"<<endl;
    c2.display();
    cout<<"sum of two complex number is:";
    c3=c1.add(c2);
    c3.display();

return 0;
}
Complex Complex::add(Complex c2)
{
    Complex c3;
    c3.real=real + c2.real;
    c3.img= img  + c2.img;
    return c3;
}

void Complex::display()
{
    cout<<real<<" + "<<img<<"i"<<endl;
}
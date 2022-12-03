//program with virtual destructor.
//virtual constructor hudaina.
#include<iostream>
using namespace std;
class Base{
    public:
        Base()
            {
                cout<<"this is base's constructor"<<endl;
            }
        virtual ~Base()
            {
                cout<<"this is a base's destructor"<<endl;
            }
};
class Derived:public Base{
    public:
        Derived()
        {
            cout<<"this is derived's constructor"<<endl;
        }
        ~Derived()
        {
            cout<<"this is derived's destructor"<<endl;
        }
};
int main()
{
Base *bptr;
cout<<"this is for base class object\n\n"<<endl;
bptr = new Base;
delete bptr;
cout<<"\n\n this is for derived classs object\n\n"<<endl;
bptr = new Derived;
delete bptr;
return 0;
}
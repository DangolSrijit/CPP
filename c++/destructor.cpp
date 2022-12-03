#include<iostream>
using namespace std;
class Car
{
    static int count;
    public:
        Car()
        {
            count++;
            cout<<"There are "<<count<<" number of cars"<<endl;
        }
        ~Car()
        {
            count--;
            cout<<"There are "<<count<<" number of cars"<<endl;
        }
};
int Car::count;
int main()
{
    cout<<"We are in main"<<endl;
    Car c1,c2,c3,c4;
    {
        cout<<"We are in block 1 "<<endl;
        Car c5;
    }//scope sakyo ani c5 distruct vayo
    {
        cout<<"We are in block 2 "<<endl;
        Car c6;
    }//scope sakyo ani c6 distruct vayo
    cout<<"We have re-entered main"<<endl;
return 0;
}//last ma program sakyo ani c1,c2,c3,c4 ko scope distruct vayo.
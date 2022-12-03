#include<iostream>
using namespace std;
class Two;
class Three;
class One
{
    int num1;
    public:
        void read();
        void display();
        void swap(Two&);
};
class Two
{
    int num2;
    public:
        void read();
        void display();
        friend void One::swap(Two&);
        void swap(Three&);
};
class Three
{
    int num3;
    public:
        void read();
        void display();
        friend void Two::swap(Three&);
};
int main()
{
    One objOne;
    Two objTwo;
    Three objThree;
    objOne.read();
    objTwo.read();
    objThree.read();
    cout<<"Before swap:"<<endl;
    objOne.display();
    objTwo.display();
    objThree.display();
    cout<<"After swapping:"<<endl;
    objOne.swap(objTwo);
    objTwo.swap(objThree);
    objOne.display();
    objTwo.display();
    objThree.display();
    return 0;
}
void One::read()
{
    cout<<"\nEnter any number:";
    cin>>num1;
}
void Two::read()
{
    cout<<"\nEnter any number:";
    cin>>num2;
}
void Three::read()
{
    cout<<"\nEnter any number:";
    cin>>num3;
}
void One::display()
{
    cout<<"\nFirst number is:"<<num1;
}
void Two::display()
{
    cout<<"\nSecond number is:"<<num2;
}
void Three::display()
{
    cout<<"\nThird number is:"<<num3<<endl;
}

void One::swap(Two& objTwo)
{
    int temp;
    temp = num1;
    num1 = objTwo.num2;
    objTwo.num2 = temp;
}

void Two::swap(Three& objThree)
{
    int temp;
    temp = num2;
    num2 = objThree.num3;
    objThree.num3 = temp;
}
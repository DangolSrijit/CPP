// WAP to calculate area of box , cube, your college using same function name calculate

#include<iostream>
using namespace std;
int calculate(int l,int b,int h)
{
    return (2*(l*b+b*h+l*h));
}
int calculate(int l)
{
   return (l*l*l);
}
int calculate(int l,int b)
{
   return (l*b);
}

int main()
{
    int l,b,h;
    cout<<"For area of box"<<endl;
    cout<<"Enter lenght breadth and height"<<endl;
    cin>>l>>b>>h;
    cout<<"The area of box is: "<<calculate(l,b,h)<<endl;
    cout<<"For are of cube"<<endl;
    cout<<"Enter length "<<endl;
    cin>>l;
    cout<<"The area of cube is: "<<calculate(l)<<endl;
    cout<<"For are of school"<<endl;
    cout<<"Enter lenght and breadth"<<endl;
    cin>>l>>b;
    cout<<"The area of school is: "<<calculate(l,b)<<endl;
    return 0;

}
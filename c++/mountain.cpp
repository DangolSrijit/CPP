#include<iostream>
using namespace std;
class Mountain
{
    int height,area;
    char location[30],name[30];
    public:
        void read();
        void dispaly();
        Mountain compare(Mountain a,Mountain b)
        {
            if(a.height>b.height)
            {
                return a;
            }
            else
            {
                return b;
            }
        }
};
int main()
{
    Mountain a,b,c;
    a.read();
    b.read();
    c=a.compare(a,b);
    cout<<"The heigest mountain in the list is:"<<endl;
    c.dispaly();
    return 0;
}
void Mountain::read()
{
    cout<<"Enter the name of the mountain:";
    cin>>name;
    cout<<"\nEnter the height of the mountain:";
    cin>>height;
    cout<<"\nEnter the location of the mountain:";
    cin>>location;
    cout<<"\nEnter the area of the mountain:";
    cin>>area;
}
void Mountain::dispaly()
{
    cout<<"Name="<<name<<endl<<"Height="<<height<<endl<<"Area="<<area<<endl<<"Location="<<location<<endl;
}


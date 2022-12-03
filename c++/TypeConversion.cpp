//wap to convert duration in seconds into object of type time tha has data member hour,min and sec.
#include<iostream>
using namespace std;

class Time
{
    int hr,min,sec;
    public:
        Time(){}
        Time(int hr,int min,int sec)
        {
            this->hr=hr;
            this->min=min;
            this->sec=sec;
        }
        Time (int duration)
        {
            hr=duration/3600;
            min=(duration%3600)/60;
            sec=(duration%3600)%60;
        }
        void display()
        {
            cout<<"\nHour:"<<hr<<endl<<"\nMinute:"<<min<<endl<<"\nSecond:"<<sec<<endl;
        }
};

int main()
{
    Time tobj;
    int duration;
    cout<<"Enter duration in seconds:"<<endl;
    cin>>duration;
    tobj=duration;
    tobj.display();
    return 0;
}
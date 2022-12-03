#include<iostream>
using namespace std;

class Player
{
    char name[20],country[20],team[20];
    int score;
    public:
        void read();
        void display();
        void compare(int);
};
int main()
{
    Player *sptr=NULL;
    int size,i;
    cout<<"Enter the numbers of player:";
    cin>>size;
    sptr= new Player[size];
    cout<<"Enter details for "<<size<<" players:"<<endl;
    for ( i = 0; i < size ; i++)
    {
        (sptr+i)->read();
    }
    cout<<endl<<"The player with the highest score is:"<<endl;
    sptr->compare(size);
    delete[]sptr;
    sptr=NULL;

return 0;
}

void Player::read()
{
    cout<<endl<<"Enter the name:";
    cin>>name;
    cout<<"Enter the country:";
    cin>>country;
    cout<<"Enter the team name:";
    cin>>team;
    cout<<"Enter the score:";
    cin>>score;
}

void Player::display()
{
    cout<<"Name="<<name<<endl<<"Country="<<country<<endl<<"Team="<<team<<endl<<"Score="<<score<<endl;
}

void Player::compare(int s)
{
    Player *max;
    max=this;
    int i;
    for (i = 1; i < s ; i++)
    {
        if (max->score<(this+i)->score)
        {
            max = this+i;
        }
        
    }
    max->display();
}
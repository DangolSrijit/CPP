#include<iostream>
#include<string.h>
using namespace std;

class StringOperation
{
    char str[20];
    public:
        StringOperation()
        {}
        StringOperation(char word[20])
        {
            strcpy(str,word);
        }
        void display()
        {
            cout<<"String="<<str<<endl;
        }
        StringOperation operator+(str);
};

StringOperation StringOperation::operator+(StringOperation c1)
{
    StringOperation temp;
    strcpy(temp.str,this->str);
    strcat(temp.str,c1.str);
    return temp;
}

int main()
{
StringOperation c1("Srijit"),c2("Dangol"),c3;
c1.display();
c2.display();
c3= c1 + c2;
cout<<"\nAfter concat:"<<endl;
c3.display();
return 0;
}
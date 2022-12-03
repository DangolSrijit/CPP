#include<iostream>
#include<string.h>
using namespace std;

class UNIVERSITY
{
    protected:
        char name_u[50],location_u[50];
    public:
        UNIVERSITY(){}
        UNIVERSITY(char*name_u,char*location_u)
        {
            strcpy(this->name_u,name_u);
            strcpy(this->location_u,location_u);
        }
        void displayUnversity()
        {
            cout<<"University name="<<name_u<<endl<<"University location="<<location_u<<endl;
        }
};

class AFFILIATEDCOLLEGE:virtual public UNIVERSITY  
{
    protected:
        char name_ac[50],address_ac[50];
        int no_of_program_ac;
    public:
        AFFILIATEDCOLLEGE(){}
        AFFILIATEDCOLLEGE(char*name_ac,char*address_ac,int no_of_program_ac,char*name_u,char*location_u):UNIVERSITY(name_u,location_u)
        {
            strcpy(this->name_ac,name_ac);
            strcpy(this->address_ac,address_ac);
            this->no_of_program_ac=no_of_program_ac;
        }
        void displayAffilicatedcollege()
        {
            cout<<"Affilicated college name="<<name_ac<<endl<<"Address of Affilicated college="<<address_ac<<endl<<"NO of program="<<no_of_program_ac<<endl;
        }
};

class CONSTITUENTCOLLEGE:virtual public UNIVERSITY
{
    protected:
        char school_dean_cc[50],name_of_program_cc[50];
    public:
        CONSTITUENTCOLLEGE(){}
        CONSTITUENTCOLLEGE(char*school_dean_cc,char*name_of_program_cc,char*name_u,char*location_u):UNIVERSITY(name_u,location_u)
        {
            strcpy(this->school_dean_cc,school_dean_cc);
            strcpy(this->name_of_program_cc,name_of_program_cc);
        }
        void displayConstituentcollege()
        {
            cout<<"School dean name="<<school_dean_cc<<endl<<"Name of program="<<name_of_program_cc<<endl;
        }
};

class STUDENT:public AFFILIATEDCOLLEGE,public CONSTITUENTCOLLEGE
{
    protected:
        char name_s[30],program_s[50];
        int enrolled_year_s;
    public:
        STUDENT(){}
        STUDENT(char*name_s,char*program_s,int enrolled_year_s,char*name_ac,char*address_ac,int no_of_program_ac,char*school_dean_cc,
        char*name_of_program_cc,char*name_u,char*location_u):AFFILIATEDCOLLEGE(name_ac,address_ac,no_of_program_ac,name_u,location_u),
        CONSTITUENTCOLLEGE(school_dean_cc,name_of_program_cc,name_u,location_u),UNIVERSITY(name_u,location_u)
        {
            strcpy(this->name_s,name_s);
            strcpy(this->program_s,program_s);
            this->enrolled_year_s=enrolled_year_s;
        }
        void displayStudent()
        {
            displayUnversity();
            displayAffilicatedcollege();
            displayConstituentcollege();
            cout<<"Name of student="<<name_s<<endl<<"program="<<program_s<<endl<<"Enrolled year="<<enrolled_year_s<<endl;
        }
};
int main()
{
STUDENT sobj1;
STUDENT sobj2("Srijit","SE",2021,"NCIT","Balkumari",5,"Ram","Engineering","Pokhara","lekhnath");
sobj2.displayStudent();
return 0;
}
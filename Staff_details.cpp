#include<iostream>
using namespace std;

class Staff
{
    protected:
        int code;
        string name;
        
    public:
        Staff(string a)
        {
            cout<<"Enter "<<a<<" data....."<<endl;
            cout<<"Enter code:";
            cin>>code;
            cout<<"Enter name:";
            cin>>name;
        }
        void putStaffData()
        {
            cout<<"Code = "<<code<<endl;
            cout<<"Name = "<<name<<endl;
        }            
        
};

class Teacher:public Staff
{
    private:
        string sub;
        string publication;
        
    public:
         Teacher():Staff("Teacher")
         {
             cout<<"Enter subject:";
             cin>>sub;
             cout<<"Enter publication:";
             cin>>publication;
             cout<<endl;
         }
         void putTeacherData()
         {
             putStaffData();
             cout<<"Subject = "<<sub<<endl;
             cout<<"publication = "<<publication<<endl;
         }    
};

class Typist:public Staff
{
    private:
        int speed;
        
    public:
        Typist(string s):Staff(s)
        {
            cout<<"Enter type speed:";
            cin>>speed;
        }
        void putTypistData()
        {
            putStaffData();
            cout<<"Speed = "<<speed<<endl;
        }
        int retTypistData()
        {
            return speed;
        }             
};

class Officer:public Staff
{
    private:
        char grade;
        
    public:   
        Officer():Staff("Officer")
        {
            cout<<"Enter grade:";
            cin>>grade;
            cout<<endl<<endl<<endl;
        }
        void  putOfficerData()
        {
            putStaffData();
            cout<<"Grade = "<<endl;
        }      
};

class Regular:public Typist
{
    public:
        Regular():Typist("Ragular Typist"){cout<<endl;}
};

class Casual:public Typist
{
    private:
        int a;
        double wages;
        
    public:
        Casual():Typist("Casual Typist")
        {
            cout<<"Enter Daily wages:";
            cin>>wages;
            cout<<endl;
        }
        void putCasualData()
        {
            a = retTypistData();
            putStaffData();
            cout<<"Speed = "<<a<<endl;
            cout<<"Daily wages = "<<wages<<endl;
        }            
};

int main()
{
    Teacher t;
    Regular r;
    Casual c;
    Officer o;
    
    cout<<"Teacher Data....."<<endl;
    t.putTeacherData();
    cout<<endl;
    
    cout<<"Officer Data....."<<endl;
    o.putOfficerData();
    cout<<endl;
    
    cout<<"Regular Typist Data....."<<endl;
    r.putTypistData();
    cout<<endl;
    
    cout<<"Casual Typist Data....."<<endl;
    c.putCasualData();
    
    return 0;
}
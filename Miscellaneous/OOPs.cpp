#include <iostream>
using namespace std;

class promotion{
    virtual void ispromoted()=0;
};

class Employee:promotion{

   protected:
    string name;
    int sal;
    int age;
    public:
Employee()
{
    sal=0;
    age=0;
    name="";
}
    Employee(string name,int sal,int age)
    {
        this->sal=sal;
       this->age=age;
       this->name=name;
    }
    //encapsulation
    string getname()
    {
        return name;
    }
    //abstraction 
   void ispromoted()
    {
        if(this->age>30){
            cout<<"Promoted"<<endl;
        }
        else cout<<"Not Promoted"<<endl;
    }
    // polymorphism in cpp
   virtual void work()
    {
        cout<<name<<" Reads Emails and Responds to those."<<endl;
    }
    int getsal()
    {
        return sal;
    }
    // operator Overloading
    Employee operator+(Employee const &e1)
    {
        Employee e;
        e.sal=(e1.sal+sal)/2;
        return e;
        
    }
    friend int getAge(Employee &ep);
};
int getAge(Employee &ep)
{
    return ep.age;
}
class Developer: public Employee{
    private:
    string plang;
    public:
    Developer(string name,int sal,int age, string plang): Employee( name,sal, age)
    {
        this->plang=plang;
    }
    void work()
    {
        cout<<name<<" Develops Software, his age is "<<age<<endl;
    }
    
};
class Teacher: public Employee{
    private:
    string subject;
    public:
    Teacher(string name,int sal,int age, string subject): Employee( name,sal, age)
    {
        this->subject=subject;
    }
    void work()
    {
        cout<<name<<" Teches subject "<<subject<<endl;
    }
};
class Driver: public Employee{
    private:
    string car;
    public:
    Driver(string name,int sal,int age, string car): Employee( name,sal, age)
    {
        this->car=car;
    }
};

int main() {
    // cout<<"Hello World!";
Employee e1={"Dheeraj",1000,25};
cout<<e1.getname()<<" "<<endl;
e1.ispromoted();
Developer d1={"Ramu",10000,30,"java"};
d1.ispromoted();
d1.work();
// cout<<d1.name<<endl;
Teacher t1={"Ramu",10000,35,"DSA"};
// cout<<t1.name<<endl;
t1.work();
t1.ispromoted();

Employee* e3= & d1;
Employee* e4=& t1;

e3->work();
e4->work();
Driver dr1={"Lakshman",10000,35,"Swift"};
Employee *e5=& dr1;
e5->work();

Employee e6={"vijay",1000,25};
Employee e7={"Sarthak",10000,30};
Employee e8=e6+e7;
cout<<e8.getsal()<<endl;
cout<<getAge(e1)<<endl;

}

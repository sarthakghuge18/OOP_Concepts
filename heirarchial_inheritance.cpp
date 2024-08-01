#include<iostream>
using namespace std;

class Person{
    public : 
        string name ; 
        int age ;
};

class Student : public Person{
    public : 
        int roll_no ;

        void get_info(){
            cout<<"name : " <<name<<endl;
            cout<<"age : "<<age<<endl;  
            cout<<"roll no : "<<roll_no<<endl;
        }
};

class Teacher : public Person{
    public : 
        string subject ;
        int salary;

        void get_info(){
            cout<<"name : " <<name<<endl;
            cout<<"age : "<<age<<endl;  
            cout<<"subject : "<<subject<<endl;
            cout<<"salary : "<<salary<<endl;
        }
};

int main(){
   Student s1;
   s1.name = "sarthak";
   s1.age = 18;
   s1.roll_no = 36;

   s1.get_info();

   Teacher t;
   t.name = "ramesh";
   t.age = 21;
   t.subject = "physics";
   t.salary = 20000;

   t.get_info();
    return 0;
}
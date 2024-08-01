#include<iostream>
using namespace std;


class Teacher{
    public : 
        string subject ; 
        int salary ;
};

class Student {
    public : 
        int roll_no ;
        string name;
};

class Teaching_Assistant : public Teacher , public Student{
    public :

        void get_info(){
            cout<<"name : "<<name<<endl;
            cout<<"subject : "<<subject<<endl;
            cout<<"roll no : "<<roll_no<<endl;
            cout<<"salary : "<<salary<<endl;
        }
};

int main(){
    Teaching_Assistant t;
    t.name = "sarthak";
    t.roll_no = 36;
    t.salary = 20000;
    t.subject = "physics";

    t.get_info();
    
    return 0;
}
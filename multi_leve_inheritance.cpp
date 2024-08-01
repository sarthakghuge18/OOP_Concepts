#include<iostream>
using namespace std;

// Inheritance - when properties & member functions of base class are passed on to the derived class.


//base class
class Person{
    public : 
        string name ; 
        int age ;
};

//derived class
class Student : public Person{
    public : 
        int roll_no ;
};

class grad_student : public Student {
    public : 
        string reserch;

    void get_info(){
        cout<<"name : "<<name<<endl;
        cout<<"age : "<<age <<endl;
        cout<< "roll no : "<<roll_no<<endl;
        cout<<"research area : "<<reserch <<endl; 
    }
};

int main(){
    grad_student g1;
    g1.name = "sarthak";
    g1.age = 18;
    g1.roll_no = 36;
    g1.reserch = "quantum physics";

    g1.get_info();

    return 0;
}
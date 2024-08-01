#include<iostream>
using namespace std;

// Inheritance - when properties & member functions of base class are passed on to the derived class.


//base class
class Person{
    public : 
        string name ; 
        int age ;

        Person(string name , int age){
            this->name = name;
            this->age = age;
        }

        Person(){
            cout<<"person constructor "<<endl;
        }
};

//derived class
class Student : public Person{
    public : 
        int roll_no ;

        Student(string name , int age , int roll_no) : Person(name , age){
            this->roll_no = roll_no;
        }

        void get_info(){
            cout<<"name : " <<name<<endl;
            cout<<"age : "<<age<<endl;  
            cout<<"roll no : "<<roll_no<<endl;
        }
};

int main(){
    // Student s1;
    // s1.name = "rahul";
    // s1.age = 21;
    // s1.roll_no = 20;
    // s1.get_info();

    Student s2("Sarthak" , 18 , 36);
    s2.get_info();

    return 0;
}
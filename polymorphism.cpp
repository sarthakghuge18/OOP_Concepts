#include<iostream>
using namespace std;

class Student{
    public :

        string name;

        Student(){
            cout<<"non parametrized "<<endl;
        }

        Student(string name){
            this->name = name;
            cout<<"parametrized "<<endl;
        }
};

int main(){

    Student s1;

    Student s2("sarthak");

    return 0;
}
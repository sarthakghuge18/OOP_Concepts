#include<iostream>
using namespace std;

// Constructor - special method invoke at a time of object creation .

//             same name as class
//             constructor doesn't have any return type 
//             only called once . at object creation
//             memory allocation happen when constructor is called


//this - this is special pointer in c++ that point to the current object

// copy constructor - used to copy properties of one object into another

class Teacher{
private:
    double salary;  //data hiding

public:

    //non - parameterized
    Teacher(){
        dept = "computer";
        sub = "dsa";
        name = "sarthak";
        salary = 20000;
    }

    //parameterized
    Teacher(string name,string dept,string sub , double salary){
        this->name = name;
        this->dept = dept;
        this->sub = sub;
        this->salary = salary;
    }

    //copy constructor
    Teacher(Teacher &obj){
        this->name = obj.name;
        this->dept = obj.dept;
        this->sub = obj.sub;
        this->salary = obj.salary;

    }

    string name;
    string dept;
    string sub;

    // method
    void changeDept(string newDept){
        dept = newDept;
    }

    void setSalary(double salary){
        this->salary = salary;
    }

    double getSalary(){
        return salary;
    }

    void getInfo(){
        cout<<name<<endl;
        cout<<dept<<endl;
        cout<<sub<<endl;
        cout<<salary<<endl;
    }
};

int main(){
    Teacher t1;
    Teacher t2("saurabh" , "mechanical" , "toc",20000);
    Teacher t3(t2);

    t1.getInfo();
    cout<<endl;
    t2.getInfo();
    cout<<endl;
    t3.getInfo();
    return 0;
};
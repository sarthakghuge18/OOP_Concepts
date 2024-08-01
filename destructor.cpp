#include<iostream>
using namespace std;

class Teacher{
private:
    double salary;  //data hiding

public:

    
    Teacher(){
        dept = "computer";
        sub = "dsa";
        name = "sarthak";
        salary = 20000;
    }

    Teacher(string name,string dept,string sub , double salary){
        this->name = name;
        this->dept = dept;
        this->sub = sub;
        this->salary = salary;
    }

    Teacher(Teacher &obj){
        this->name = obj.name;
        this->dept = obj.dept;
        this->sub = obj.sub;
        this->salary = obj.salary;

    }

    //destructor 
    ~ Teacher (){
        cout<<"it delete every thing "<<endl;
    }

    string name;
    string dept;
    string sub;

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
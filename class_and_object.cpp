#include <iostream>
using namespace std;

// Access modifier --

//         1) private - accessible in class
//         2)public - accessible to everyone
//         3)protected - accessible in class and derived class

class Teacher
{

private:
    double salary;

public:
    string name;
    string dept;
    string sub;

    // method
    void changeDept(string newDept)
    {
        dept = newDept;
    }

    void setSalary(double salary)
    {
        this->salary = salary;
    }

    double getSalary()
    {
        return salary;
    }
};

int main()
{
    Teacher t1;
    t1.name = "sarthak";
    t1.dept = "computer";
    t1.sub = "dsa";
    t1.setSalary(20000);

    cout << t1.getSalary();

    return 0;
}
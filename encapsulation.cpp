#include <iostream>
using namespace std;

//Encapsultion - wrapping up of data and member function in a single unit is called class.

class Teacher
{
private:
    double salary;  //data hiding

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
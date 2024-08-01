#include<iostream>
using namespace std;

void func(){
    static int x = 0;
    cout<<"x : "<<x<<endl;
    x++;
}

class A{
public:
    A(){
        cout<<"constructor"<<endl;
    }

    ~A(){
        cout<<"destructor"<<endl;
    }

};

int main(){
    func();
    func();

    static A a;

    cout<<"end of main program "<<endl;
    return 0;
}
#include<iostream>
using namespace std;

class parent{
public :
    void getInfo(){
        cout<<"parent class"<<endl;
    }
};

class child : public parent{
public:
    void getInfo(){
        cout<<"child class"<<endl;
    }
};

int main(){

    child c1;
    c1.getInfo();

    return 0;
}
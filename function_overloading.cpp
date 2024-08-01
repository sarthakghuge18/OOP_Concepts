#include<iostream>
using namespace std;

class Student{

    public :
        void show(int x){
            cout<<"int : "<<x<<endl; 
        }

        void show(char x){
            cout<<"char : "<<x<<endl;
        }
};

int main(){

    Student s1;
    
    s1.show(5);
    s1.show('a');

    return 0;
}
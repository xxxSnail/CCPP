#include <iostream>
using namespace std;

class Base{
public:
    Base(){
        cout<<"Base()"<<endl;
    }
private:
    long _base;
};

class Derived : public Base{
public:
    Derived(long derived) : _derived(derived){
        cout<<"Derived(derived)"<<endl;
    }
private:
    long _derived;
};

void test(){
    Derived d(111);
}

int main(){
    test();
    return 0;
}
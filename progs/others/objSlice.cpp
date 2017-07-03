#include <iostream>
using namespace std;
 
class Base
{
protected:
    int i;
public:
    Base(int a)     { i = a; }
    Base operator=(const Base &b) { cout<<"Base's assignment\n"; }
    Base(const Base &b) { cout<<"Base's copy constructor\n"; }
    virtual void display()
    { cout << "I am Base class object, i = " << i << endl; }
};
 
class Derived : public Base
{
    int j;
public:
    Derived(int a, int b) : Base(a) { j = b; }
    Derived operator=(const Derived &d) { cout<<"Derived's assignment\n"; }
    //Derived(const Derived &d) { cout<<"Derived's copy constructor\n"; }
    void display()
    { cout << "I am Derived class object, i = "
           << i << ", j = " << j << endl;  }
};
 
// Global method, Base class object is passed by value
void somefunc (Base obj)
{
    obj.display();
}
 
int main()
{
    Base b(33);
    Derived d(45, 54);
    //b = d;
    //b.display();
    //somefunc(b);
    //somefunc(d);  // Object Slicing, the member j of d is sliced off
    return 0;
}

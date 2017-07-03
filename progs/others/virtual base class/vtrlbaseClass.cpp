#include<iostream>

using namespace std;

class A {
public:
      A() { cout<<"A()\n";}
};

class B:virtual public A {
public:
      B() { cout<<"B()\n";}
};

class C:virtual public A {
public:
      C() { cout<<"C()\n";}
};


class MyClass:public B,public C {
public:
      MyClass() { cout<<"MyClass()\n";}
};

int main() {

MyClass m;

return 0;

}

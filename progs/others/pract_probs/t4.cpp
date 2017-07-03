#include<iostream>
using namespace std;

class A {

int a;
public:
      A(int x):a(x){ cout<<"A()\n";}
      void display() { cout<<"a = "<<a<<endl;}
};

A bar() {

  A temp(3);
  return temp;

}

int main() {
A obj = bar();
obj.display();
return 0;

}

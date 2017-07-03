#include<iostream>
using namespace std;
 
class A
{
  int x;
public:
   A(int z):x(z) {}
  //void setX(int i) {x = i;}
  void print() { cout <<x<<endl; }
};
 
class B:  virtual public A
{
public:
  B(int x=10):A(x)  {  }
};
 
class C: virtual public A  
{
public:
  C(int y=20):A(y) { }
};
 
class D: public B, public C {
};
 
int main()
{
    D d;
    d.print();
    return 0;
}

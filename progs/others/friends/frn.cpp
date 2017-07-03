#include<iostream>
using namespace std;

class A {
  int data;
  A(int x = 10):data(x){ }   
public:
  friend int main();

};

int main() {

A obj;
cout<<obj.data<<endl;

return 0;

}
       

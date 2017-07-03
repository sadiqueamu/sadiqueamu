#include<iostream>
using namespace std;

class A {
  int k;
  int *ptr;
public:
  A(int a):k(a) { 
    cout<<"ctor\n";
    ptr = new int[k];
    for(int i = 0; i < k; i++) {
      *(ptr + i) = i*i*i;
    }
  }
  A(const A &obj) {
    cout<<"copy ctor\n";
    k = obj.k;
    ptr = new int[k];
    for(int i = 0; i < k; i++) {
      *(ptr + i) = i*i;
    }
  } 
  void show() {
    for(int i = 0; i < k; i++) {
      cout<<*(ptr + i)<<" ";
    }
    cout<<endl;
  }
};

A foo() {
  A temp(5);
  return temp;
}

int main() {
  A obj = foo();
  obj.show();
  //A obj1 = obj;
  return 0;
}

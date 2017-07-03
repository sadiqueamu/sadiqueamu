#include<iostream>
using namespace std;

class A;
A* getInstance();

class A {
  A() {
    cout << "A() object is created\n";
  }
  
public:
   static bool isInstance;
   static A* singleton;
   //A* singleton; this has to be static because object is still not existing
  ~A() {
    isInstance = false;
    cout<<"~A()\n";
  }

  friend A* getInstance() {
    if(!isInstance) {
      singleton = new A;
      isInstance = true;
      return singleton;
    }
    else {
      return NULL;
    }
  } 

  void someMethod() {
    cout << "Inside member function of A\n";
  }

};

A* A::singleton = NULL;
bool A::isInstance = false;
//A obj; !!private constructor will throw error
int main() {
  A* ptr[10];
  int i = 0;
  while(i < 10) {
    ptr[i] = getInstance(); 
    if(!ptr[i]) {
      cout << "A's object already exists\n";
    }
    else {
      ptr[i] ->someMethod();
    }
    i++;
  }
  
  delete A::singleton;
  cout<<"Main terminates\n"; 
  return 0;
}

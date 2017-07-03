#include<iostream>
using namespace std;

class A {
    static A* obj; 
public: 
     
     A() {
        cout<<"A()\n";
     }

     ~A() {
        cout<<"~A()\n";
     }
};

A* A::obj = NULL;

int main() {
   static A obj1;
   static A* obj2 = new A;
   //A::obj = new A; //obj is private can't access here
   delete obj2;
   //delete A::obj;  //obj is private
   cout<<"Main terminating\n";
   return 0;
}
          

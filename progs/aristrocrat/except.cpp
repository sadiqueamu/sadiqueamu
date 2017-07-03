#include<iostream>
using namespace std;

class A {

public:
      A(){ cout<<"A()\n";}
      ~A() {
         cout<<"Breakpoint#3 inside ~A() throwing 10 in the next line\n"<<endl;
         throw 10;
         cout<<"Breakpoint#4 inside ~A()\n"<<endl;
      }
};

int main() {

  try {
     
    A obj;
    cout<<"Breakpoint#1 inside try{} throwing 100"<<endl;
    throw 100;
    cout<<"Breakpoint#2 inside try{}"<<endl;
  }
  catch(int i) {
     cout<<i<<endl;
  }
  catch(char c) {
    cout<<c<<endl;
  }
  catch(...) {
   cout<<"anything"<<endl;
  }

return 0;
}

//Destructer is immediately called when exception thrown from the try block
//after creating the object, and when again exception is thrown from destructor,//stack unwinding happens, and the program terminate abnormally

#include<iostream>

using namespace std;

class base {

public:
      base() {
          foo();
      }
      ~base() {
          foo();
      }

      virtual void foo() {
          cout<<"Inside foo() of base class\n";
      }
};

class derived:public base {

public:
      derived() {
          foo();
      }
      ~derived() {
          foo();
      }
      void foo() {

          cout<<"Inside foo() of derived class\n";
      }
};

int main() {

base *bp;
derived ob;
bp = &ob;

bp->foo();

return 0;

}

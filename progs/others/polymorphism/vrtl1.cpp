#include<iostream>
using namespace std;

class base {
public:
      virtual void foo() = 0;
};

class derived:public base {
public:
      void foo() {
          cout<<"Do some stuffs in derived's foo()\n";
          base::foo();
      }
};

void base::foo() {
      cout<<"Lo ji I am inside base's foo()\n";
}

int main() {
base *bptr = new derived;
bptr->foo();
return 0;
}

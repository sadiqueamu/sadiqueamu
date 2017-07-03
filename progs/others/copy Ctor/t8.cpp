#include<iostream>

using namespace std;

class foo {

public:
     foo() { cout<<"Ctor\n"; }
     foo(const foo &obj) { cout<<"Copy Ctor\n"; }
     foo& operator=(foo &obj) {
       cout<<"Assignment operator\n";
       return obj;
     }
};

int main() {

  foo a;
  foo b(a);
  foo c;
  b = c;
  return 0;
}

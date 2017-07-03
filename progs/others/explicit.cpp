#include<iostream>
using namespace std;

class foo {

  int bar;
public:
  explicit foo(int x):bar(x) {} //No implicit conversion of non-types to foo
  //foo(int x):bar(x) {}  //Implicit conversion of non-types to foo
  int getFoo() {
    return bar;
  }

};

void doBar(foo obj) {

 int i = obj.getFoo();
 cout<<i<<endl;
}

int main() {

  doBar(3); //Error -- no explicit conversion
  return 0;
}

#include<iostream>
using namespace std;

class final;

class makeFinal {

private:
      makeFinal() { cout<<"makeFinal()\n"; }
      friend final;
};

class final:virtual makeFinal {

public:
      final() { cout<<"final()\n"; }
};

/* Can't inherit final as makeFinal dtor is private */
class derived:public final {

public:
      derived() { cout<<"derived()\n"; }

};/**/


int main() {

  final f;
  return 0;

}

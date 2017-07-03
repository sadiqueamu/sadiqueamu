#include<iostream>
using namespace std;

class complex {

  double real;
  double imag;
public:
  explicit complex(double r = 0.0,double i = 0.0):real(r),imag(i) {}
  
  bool operator==(complex rhs) {
    return (real == rhs.real && imag == rhs.imag)?true:false;
  }
};

int main() {

  complex com1(3.0,0.0);

  if(com1 == (complex)3.0) { cout<<"same\n"; }
  else { cout<<"not same\n"; }
  return 0;
}

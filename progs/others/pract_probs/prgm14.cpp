#include<iostream>

using namespace std;
int* foo() {
  int* temp = new int(10);
  delete temp;
  return temp;
}

int main() {
  int *ptr;
  ptr = foo();
  cout<<*ptr<<endl; 
  delete ptr;
  return 0;
}

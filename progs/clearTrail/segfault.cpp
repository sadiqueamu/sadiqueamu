#include<iostream>
using namespace std;

int* foo() {

  int *ptr = new int(2);
  int a = 2;
  //delete ptr;
  //ptr = NULL;
  return ptr;
  //return &a;
}

int main() {
  int bar[10];
  //int *a;
  int *qtr = foo();
  cout<<*qtr<<endl;
  //a[0] = 3;
  for(int i = 0; i <= 10; i++) {
    bar[i] = i;
  }
 
  return 0;
}

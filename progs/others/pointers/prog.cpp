#include<iostream>
using namespace std;

int main() {

  int a1[] = {5,6};
  int a2[] = {7,8};

  int *a[2];
  a[0] = a1;
  a[1] = a2;

  cout<<"*a = "<<*a<<endl;
  cout<<"a[0] = "<<a[0]<<endl;
  cout<<"**a = "<<**a<<endl;
  cout<<"*a[0] = "<<*a[0]<<endl;
  cout<<"(a+0) = "<<(a+0)<<endl;
  cout<<"*(*(a+0) + 1) = "<<*(*(a+0) + 1)<<endl;
  cout<<"*(a[0] + 1) = "<<*(a[0] + 1)<<endl;
  cout<<"*(*(a+1)) = "<<*(*(a+1))<<endl;


  return 0;

}

#include<iostream>
using namespace std;

int main() {

  //char *str = 'h'; --error
  char *str = new char('h');
  cout<<str<<endl;
  delete []str;
  return 0;
}

#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

class Test{
int aaa;
int bbb;
int ccc;
public:
//Test(){}
Test(int a,int b,int c){
       aaa = a;
       bbb = b;
       ccc = c;
}   
Test(int a,int b){
      aaa = a;
      bbb = b;
      ccc = 0;
}
};
int main(){
  Test t(2,3,4);
  Test t1(2,3);
  Test t2;
  int a = 12;
  int b = 25;
  int c = 13;
  char str[25];
  sprintf(str,"%d:%d:%d",a,b,c);
  cout<<str<<"\n";

  return 0;
}

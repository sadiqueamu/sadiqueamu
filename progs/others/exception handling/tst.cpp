#include<iostream>
using namespace std;

int main() {
  
  try {
   
    if(!0) 
      throw "Hello";
    
  }
  catch(int i) {

    cout<<"from#1 "<<i<<endl;
  }
  catch(char j) {
    
    cout<<"from#2 "<<j<<endl;
  }
  catch(...) {
    cout<<"anything"<<endl;
 }
  return 0;
}

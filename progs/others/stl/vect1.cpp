#include<iostream>
#include<vector>
using namespace std;

int main() {

  vector<int> myVector;
  vector<string> v {"Sadik","The","CPP","Coder"};
  vector<string> v1 {5, "LOVE"};
  for(int i = 0; i < 4 ; i++) 
    myVector.push_back(i);
  vector<int>::iterator p = myVector.begin();
  myVector.insert(p,-1);
  cout<<myVector.size()<<endl;
  cout<<v.size()<<endl;
  cout<<v1.size()<<endl;
  cout<<v[0]+" Khan"<<endl;
  for(vector<int>:: iterator i=myVector.begin(); i!=myVector.end(); i++)
    cout<<*i<<endl;

  return 0;

}

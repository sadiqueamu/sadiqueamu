#include<iostream>
#include<set>
#include<iterator>
using namespace std;

int main() {

  set<int,greater<int>> m;
  m.insert(11);
  m.insert(8);
  m.insert(10);
  m.insert(5);
  m.insert(10);

  set<int,greater<int>>::iterator itr = m.begin();
  while(itr!=m.end()) {
    cout<<*itr<<" ";
    itr++;
  }
  cout<<endl;
  set<int> m1(m.begin(),m.end());
  for(itr = m1.begin();itr!=m1.end();itr++) {
    cout<<*itr<<" ";
  }
  cout<<endl;
  m1.erase(m1.begin(),m1.find(8));
  for(itr = m1.begin();itr!=m1.end();itr++) { cout<<*itr<<" "; }
  cout<<endl;
  return 0;

}

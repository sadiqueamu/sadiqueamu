#include<iostream>
#include<vector>
using namespace std;

int main() {
  
  vector<int> v;
  int j = 1;
   for(int i = 0; i < 52; i++) {
     if(j == 14) {
       j = 1;
     }
     v.push_back(j);
     j++;
  }

  vector<int>::iterator it = v.begin();

  while(it != v.end()) {
     cout<<*it<<" ";
     it++;
  }
  cout<<endl;
  return 0;
}

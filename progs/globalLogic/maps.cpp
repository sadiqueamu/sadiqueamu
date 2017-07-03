#include<iostream>
#include<map>
using namespace std;

int main() {

   map<int,int> m;
   
   for(int i = 1; i < 10; i++) {
      m.insert(make_pair(i,1));
   }

   map<int,int>::iterator itr = m.find(11);
   if(itr != m.end()) 
     cout<<itr->second<<endl;
   else
     cout<<"key does not exist\n";
   return 0;
}

#include<iostream>
#include<map>
using namespace std;


void checkDuplicates(int nums[],int size) {
 
  map<int,int> m; 
  m.insert(make_pair(nums[0],1));
  map<int,int>::iterator itr;

  for(int i = 1; i<size; i++) {
     itr = m.find(nums[i]);
	 if(itr != m.end())
	   itr->second++;
	 else
	   m.insert(pair<int,int>(nums[i],1));
  }
  itr = m.begin();
  while(itr != m.end()) {
    if(itr-> second > 1) {
      cout<<itr->first<<" is duplicated and it appears "<<itr->second<<" times"<<endl;
    }
    itr++;
  }
}


int main() {
 
  int data[] = {1,2,3,4,1,2,1,3,3};
  int size = sizeof(data)/sizeof(data[0]);
  checkDuplicates(data,size);
  return 0;
} 

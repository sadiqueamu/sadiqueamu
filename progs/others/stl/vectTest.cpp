#include<iostream>
#include<vector>
using namespace std;

vector<int> foo(vector<int>& nums) {


vector<int>::iterator p = nums.begin();


while(p!=nums.end()) {

 *p = *p+2;
  p++;
}

return nums;

} 

int main() {

vector<int> data{1,2,3,4};

vector<int> modified = foo(data);

for(vector<int>::iterator p = modified.begin();p!=modified.end();p++)
   cout<<*p<<" ";


return 0;
}

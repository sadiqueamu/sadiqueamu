#include<iostream>
using namespace std;


void foo(vector<int> nums)  {
temp[0] = arr[0];
for(int = 1; i < size; i++) {
    flag = 1;
    for(j = i-1; j >= 0; j--) {
      if(nums[i] != temp[j]) 
        continue;
       else {
         flag = 0;
         temp[j]++;
       }
     }
     if(flag)
       temp[i] = nums[i];
}

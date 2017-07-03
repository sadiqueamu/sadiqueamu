class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       vector<int>::iterator p = nums.begin();
       vector<int>::iterator q;
       vector<int> indices;
       int i = 0;
       int j = i+1;
       int sum = 0;
       while(p != nums.end()) {
           q = p+1;
           j = i + 1;
           while(q != nums.end()){
               sum = *p + *q;
               if(sum == target) {
                   indices.push_back(i);
                   indices.push_back(j);
                   return indices;
               }
               q++;
               j++;
            }
            p++;
            i++;
       }
    }
};
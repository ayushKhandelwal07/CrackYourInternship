#include<bits/stdc++.h>
using namespace std;

// Input: nums = [1,1,2]
// Output: 2, nums = [1,2,_]

int removeDuplicates(vector<int>& nums) {
      int ptr = 1;
      int n = nums.size();

      for(int i = 1; i < n; i++){
            if(nums[i-1] != nums[i]) nums[ptr++] = nums[i];
      }
      return ptr;
}

int main(){
      vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
      cout << removeDuplicates(nums) << endl;
      return 0;
}
#include<bits/stdc++.h>
using namespace std;



// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]

void moveZeroes(vector<int>& nums) {
      int ptr = 0;
      int n = nums.size();

      for(int i = 0; i < n; i++){
            if(nums[i] != 0){
                  swap(nums[i],nums[ptr++]);
            }
      }
}

int main(){
      vector<int> nums = {0,1,0,3,12};
      moveZeroes(nums);
      for(auto x: nums) cout << x << " ";
      return 0;
}
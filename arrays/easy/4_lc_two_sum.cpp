#include<bits/stdc++.h>
using namespace std;

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]


vector<int> twoSum(vector<int>& nums, int target) {
      int n = nums.size();

      unordered_map<int , int> mp;

      for(int i = 0; i < n; i++){
            int com = target - nums[i];

            if(mp.find(com) != mp.end()){
                  return { i , mp[i]};
            }
            mp[nums[i]] = i;
      }
      return { -1 , -1};
}

int main(){
      vector<int> nums = {2,7,11,15};
      int target = 9;
      vector<int> ans = twoSum(nums, target);   
      for(int n : ans) cout << n << endl;

      return 0;
}
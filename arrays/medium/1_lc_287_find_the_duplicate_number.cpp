#include<bits/stdc++.h>
using namespace std;

// Input: nums = [1,3,4,2,2]
// Output: 2

int findDuplicate(vector<int>& nums) {
      unordered_map<int,int> mp;
      int n = nums.size();

      for(int n : nums) mp[n]++;

      for(auto it : mp){
            if( it.second >= nums.size() /2) return it.first;
      }
      return -1;
}

int main(){
      vector<int> nums = {1, 3, 4, 2, 2};
      int duplicate = findDuplicate(nums);
      cout << "Duplicate number: " << duplicate << endl;

      return 0;
}
#include<bits/stdc++.h>
using namespace std;

// Input: nums = [1,1,1], k = 2

int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> mp;
        int sum = 0;
        int ans = 0;
        mp[0] = 1;
        for(int i = 0; i < n; i++){
            sum += nums[i];
            if(mp.find(sum-k) != mp.end()){
                ans += mp[sum-k];
            }
            mp[sum]++;
        }
        return ans;
}

int main(){
      vector<int> nums = {1,1,1};
      int k = 2;
      cout<<subarraySum(nums,k);

      return 0;
}
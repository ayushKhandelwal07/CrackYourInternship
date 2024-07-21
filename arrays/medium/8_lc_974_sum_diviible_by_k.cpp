#include<bits/stdc++.h>
using namespace std;



int subarraysDivByK(vector<int>& nums, int k) {
      int n = nums.size();
      int sum = 0;
      int cnt = 0;

      unordered_map<int,int>mp;

      mp[0]  =1;

      for(int i=0;i<n;i++){
            sum += nums[i];

            int rem = sum % k;

            if(rem < 0) sum += k;

            if(mp.find(rem) != mp.end()){
                  cnt += mp[rem];
            }
            mp[rem]++;
      }
      return cnt;
}


int main(){

      return 0;
}
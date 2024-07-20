#include<bits/stdc++.h>
using namespace std;


    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;

        for(int i = 0; i < n; i++){
            int index = abs(nums[i])-1;
            if(nums[index] < 0 ){
                ans.push_back(index+1);
            }else{
                nums[index] *= -1;
            }
        }
        return ans;
    }

int main(){
      vector<int> nums = {4,3,2,7,8,2,3,1};
      vector<int> ans = findDuplicates(nums);
      for(auto x: ans){
          cout<<x<<" ";
      }
      return 0;
}
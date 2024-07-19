#include<bits/stdc++.h>
using namespace std;


// Example 1:

// Input: nums = [3,2,3]
// Output: 3
// Example 2:

// Input: nums = [2,2,1,1,1,2,2]
// Output: 2

int majorityElement(vector<int>& nums) {
      unordered_map<int , int> mp;

      for(int n : nums) mp[n]++;

      for(auto it : mp) if(it.second >= 2) return it.first;

      return -1;

//       // more optimize approach with constant space;
//     int majorityElement(vector<int>& nums) {   // moore vooting algorithm
//         int n = nums.size();
//         int el;
//         int cnt = 0;

//         for(int i = 0; i < n; i++){
//             if( cnt == 0){
//                 el = nums[i];
//             }else if(el == nums[i]){
//                 cnt++;
//             }else {
//                 cnt--;
//             }
//         }
//         return el;

}

int main(){
      vector<int> nums = {3,2,3};
      cout << majorityElement(nums) << endl;

      return 0;
}
#include <bits/stdc++.h>
using namespace std;

// Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
// Output: [1,2,2,3,5,6]


void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      int i = m - 1;
      int j = n - 1;
      int k = m + n - 1;

      while(j >= 0){
            if( i >= 0 && nums1[i] > nums2[j]){
                  nums1[k--] = nums1[i--];
            }else{
                  nums1[k--] = nums2[j--];
            }
      }
}

int main(){
      vector<int> nums1 = {1,2,3,0,0,0};  
      vector<int> nums2 = {2,5,6};
      merge(nums1, 3, nums2, 3);
      for(auto x: nums1) cout << x << " ";



      return 0;
}
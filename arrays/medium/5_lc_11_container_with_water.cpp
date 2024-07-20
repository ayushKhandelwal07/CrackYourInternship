#include<bits/stdc++.h>
using namespace std;

int maxArea(vector<int>& height) {
      int i = 0;
      int j = height.size()-1;

      int cur = 0;
      int ans = 0;

      while(i < j){
            cur = (j-i)*min(height[i],height[j]);
            ans = max(ans,cur);

            height[i] < height[j]  ? i++ : j--;
      }        
      return ans;
}

int main(){
      vector<int> height = {1,8,6,2,5,4,8,3,7};
      cout<<maxArea(height);
      return 0;
}
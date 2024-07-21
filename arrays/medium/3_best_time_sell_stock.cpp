#include<bits/stdc++.h>
using namespace std;


// Input: prices = [7,1,5,3,6,4]
// Output: 7

int maxProfit(vector<int>& prices) {
      int n = prices.size();

      int ans = 0;

      for(int i=1;i<n;i++){
            if(prices[i-1] < prices[i]) ans += prices[i] - prices[i-1];
      }
      return ans;
        
}

int main(){
      vector<int> prices = {7,1,5,3,6,4};
      cout<<maxProfit(prices);
      

      return 0;
}
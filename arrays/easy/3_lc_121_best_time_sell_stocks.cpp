#include <bits/stdc++.h>
using namespace std;

// Input: prices = [7,1,5,3,6,4]
// Output: 5

int maxProfit(vector<int>& prices) {
      int n = prices.size();

      int mini = INT_MAX;
      int maxi = INT_MIN;

      for(int i = 0; i < n; i++){
            mini = min(mini , prices[i]);
            maxi = max(maxi , prices[i] - mini);
      }
      return maxi;
}

int main(){
      vector<int> prices = {7,1,5,3,6,4};
      cout << maxProfit(prices) << endl;
      return 0;

}
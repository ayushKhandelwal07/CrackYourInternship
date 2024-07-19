#include<bits/stdc++.h>
using namespace std;

int main(){

      vector<int> vc = {2,0,2,1,1,0};
      int low = 0;
      int mid = 0;
      int high = vc.size()-1;

      while( mid <= high){
            if(vc[mid] == 0){
                  swap(vc[mid++],vc[low++]);
            }else if( vc[mid] == 1 ){
                  mid++;
            }else {
                  swap(vc[mid],vc[high--]);
            }     
      }

      for(int n : vc) cout << n << " ";


      return 0;
}
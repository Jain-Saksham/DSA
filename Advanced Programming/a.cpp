#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int target;
    cin>>target;
    vector<int> cost;
    for(int i=0;i<9;i++){
      int temp;
      cin>>temp;
      cost.push_back(temp);
    }
    vector<int> dp(target + 1, -10000);
    dp[0] = 0;
    for (int t = 1; t <= target; ++t) {
        for (int i = 0; i < 9; ++i) {
            dp[t] = max(dp[t], t >= cost[i] ? 1 + dp[t - cost[i]] : -10000);
        }
    }
    if(dp[target] < 0){
      cout<<-1<<endl;
      break;
    }
    string result = "";
    for (int i = 8; i >= 0; --i) {
        while (target >= cost[i] && dp[target] == dp[target - cost[i]] + 1) {
            result.push_back('1' + i);
            target -= cost[i];
        }
    }
    stringstream s(result);
    int ans = 0;
    s>>ans;
    cout<<ans<<endl;
  }
  return 0;
}
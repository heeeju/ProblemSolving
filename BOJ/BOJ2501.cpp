#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, K;
    int cnt=0;
    cin >> N >> K;
    for(int i=1; i<=N; i++){
      if(N % i == 0){
        cnt++;
        if(cnt==K){
          cout << i;
          return 0;
        }
      }
    }
    cout << 0;
    return 0;
}

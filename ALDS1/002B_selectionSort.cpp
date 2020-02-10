#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define FOR(i,a,b) for(ll i=a;i<=b;i++)
#define FORD(i,a,b) for(ll i=a;i>=b;i--)
#define ALL(a)  (a).begin(),(a).end()
#define SZ(a) int((a).size())
#define SORT(c) sort((c).begin(),(c).end())
#define PB push_back
#define MP make_pair
#define MEMSET(v, h) memset((v), h, sizeof(v))
#define sqr(x)  ((x) * (x)) 
#define cub(x)  ((x) * (x) * (x))
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
// ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
// ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

// 選択ソートは離れた場所をswapするため、安定ではない
int selectionSort(int a[], int n){
  int cnt = 0;
  FOR(i,0,n-1){
    int minj = i;
    FOR(j,i,n-1){
      if(a[j]<a[minj]) minj = j;
    }
    if(i!=minj) ++cnt;
    swap(a[i],a[minj]);
  }
  return cnt;
}

int main(){
  int n; cin >> n;
  int a[n];
  FOR(i,0,n-1) cin >> a[i];
  int ans = selectionSort(a,n);

  FOR(k,0,n-1) {
    if(k!=n-1) cout << a[k] << " ";
    else cout << a[k];
  }
  cout << endl;
  cout << ans << endl;
}

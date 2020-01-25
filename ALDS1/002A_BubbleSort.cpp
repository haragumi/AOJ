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

int bubblesort(int a[],int n){
  int cnt = 0;
  bool flag = true;
  while(flag){
    flag = false;
    FORD(i,n-1,1){
      if(a[i]<a[i-1]){
        swap(a[i],a[i-1]);
        ++cnt;
        flag = true;
      }
    }
  }
  return cnt;
}

int main(){
  int n; cin >> n;
  int a[n];
  FOR(i,0,n-1) cin >> a[i];
  int cnt = bubblesort(a,n);
  FOR(i,0,n-1){
    if(i!=n-1) cout << a[i] << " ";
    else cout << a[i];
  }
  cout << endl;
  cout << cnt << endl;
}

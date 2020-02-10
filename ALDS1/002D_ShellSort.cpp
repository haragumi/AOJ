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

ll cnt;
vector<int> g;

int InsertionSort(int a[], int n, int g){
  FOR(i,g,n-1){
    int v = a[i];
    int j = i-g;
    while(j>=0 && a[j]>v){
      a[j+g] = a[j];
      j -= g;
      ++cnt;
    }
    a[j+g] = v;
  }
}

/* 
  g = 1, 4, 13, 40, 121...
  g(n+1) = 3*g(n) + 1 の減少数列を用いると
  O(N^1.25)で計算できることが予測されている

  最後には必ずg==1の通常InsertionSortを行う
*/

int shellSort(int a[], int n){
  for(int h=1; ; ){
    if(h>n) break;
    g.PB(h);
    h = 3*h + 1;
  }

  FORD(i,SZ(g)-1,0) InsertionSort(a,n,g[i]);
}

int main(){
  int n; cin >> n;
  int a[n];
  FOR(i,0,n-1) cin >> a[i];
  cnt = 0;
  shellSort(a,n);

  cout << SZ(g) << endl;
  FORD(i,SZ(g)-1,0){
    if(i!=SZ(g)-1) cout << " ";
    cout << g[i]; 
  }
  cout << endl;
  cout << cnt << endl;
  FOR(i,0,n-1) {
    cout << a[i] << endl;
  }
}

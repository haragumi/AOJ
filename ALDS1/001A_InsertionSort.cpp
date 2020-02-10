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

void trace(int a[], int N){
  int i;
  FOR(i,0,N-1){
    if(i>0) cout << " ";
    cout << a[i];
  }
  cout << endl;
}

int InsertionSort(int a[], int n){
  FOR(i,1,n-1){
    trace(a,n);
    int v = a[i];
    int j = i-1;
    while(j>=0 && a[j]>v){
      a[j+1] = a[j];
      --j;
    }
    a[j+1] = v;
  }
}

int main(){
  int n; cin >> n;
  int a[n];
  FOR(i,0,n-1) cin >> a[i];
  InsertionSort(a,n);

  FOR(k,0,n-1) {
    if(k!=n-1) cout << a[k] << " ";
    else cout << a[k];
  }
  cout << endl;
}

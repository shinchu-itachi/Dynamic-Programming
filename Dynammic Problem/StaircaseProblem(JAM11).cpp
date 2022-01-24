/*
     ContestName     =   Shinchu_itachi
   " Walking on the road not taken with my own gutts.. "
*/

#include <bits/stdc++.h>
using namespace std ;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define vi vector<int>
#define nline "\n"
#define inf 1e9 + 7
#define iinf INT_MAX
#define print cout
#define eb emplace_back
#define vb vector<bool>
#define vll vector<ll>
#define vvi vector<vector<int>>
#define vvb vector<vector<bool>>
#define vc vector<char>
#define vvc vector<vector<char>>
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define fs first
#define sc second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

#ifndef ONLINE_JUDGE
#define working cerr << "Working here.." << "\n" ;
#else
#define working
#endif

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T> void _print(stack<T> v);
template <class T> void _print(list<T> v);
template <class T> void _print(priority_queue<T> v);

template <class T> void _print(priority_queue<T> v){cerr<<"{ ";while(!v.empty()){_print(v.top()); cerr<<" "; v.pop();} cerr<<" }";}
template <class T> void _print(stack<T> v){cerr<< "[" ; while(!v.empty()){_print(v.top()); cerr<< " " ; v.pop();} cerr<< "]" ;}
template <class T> void _print(list<T> v) {cerr << "["; for(auto i: v){_print(i);cerr << " " ;} cerr<< "]";}
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.fs); cerr << ","; _print(p.sc); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

/*--------------------------------------------------------------------------------------------------------------------------------*/
ll power(ll a, ll b){ll res = 1; while(b){if(b&1){res *= a;} b /=2; a*=a;} return res ;}
ll mod_pow(ll a, ll b, ll mod){ll res = 1; while(b){if(b&1){res = (res*a)%mod;} b /=2; a=(a*a)%mod;} return (res%mod) ;}
void usaco (string filename = ""){if(sz(filename)){ freopen((filename+ ".in").c_str() , "r", stdin); freopen((filename+ ".out").c_str() , "w", stdout); } }
/*--------------------------------------------------------------------------------------------------------------------------------*/

const int N = 1e6+10;

bool isPrime(ll x){
     if(x  <  2) return false;
     for(int i=2;i * i <= x ; i++)
          if(x%i==0) 
               return false;
     return true;

}

ll dp [N];

void findNstair(int n){
    for ( ll i = 4 ; i < N - 1; i++ )
      dp[i] = (dp[i-1]+dp[i-2]+dp[i-3]) % 1000000007;
}

void solve(){
   
   // in this question we will simply use 3 state to find the value of n , n-1, n-2, n-3
   int n ; cin >> n;
   dp[1] = 1;
   dp[2] = 2;
   dp[3] = 4;
   findNstair(n);
   
   cout << dp[n] << nline;
} 


int main (){
   #ifndef ONLINE_JUDGE
      freopen("error.txt", "w", stderr);
   #endif
   cout << setprecision(15) << fixed;
    
   fastio();
   
   int test = 1, testcase = 1 ;
   cin >> test ;
   
   while(test --){
      // cout << "Case #" << testcase++ << ": ";
      solve () ;
   }
   working
}

// question link :- https://www.codechef.com/problems/JAM11/

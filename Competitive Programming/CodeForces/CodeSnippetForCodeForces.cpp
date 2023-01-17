/**************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;
 
typedef                     long long ll;
typedef                     long double lld;
typedef                     vector<ll> vl;
typedef                     vector<string> vs;
typedef                     vector<vl> vvl;
typedef                     pair<ll, ll> pl;
typedef                     unsigned long long ull;
 
#define _mod1               1000000007
#define _mod2               998244353
#define ff                  first
#define ss                  second
#define pb                  push_back
#define sz(v)               ll(v.size())
#define all(v)              v.begin(), v.end()
#define forn(i,n)           for(ll i = 0; i < n; i++)
#define yy                  cout << "YES\n"
#define nn                  cout << "NO\n"
#define ms0(X)              memset((X), 0, sizeof((X)))
#define ms1(X, V)           memset((X), V, sizeof((X)))
 
// Print my stuff
void _print(ll t)           {cerr << t;}
void _print(int t)          {cerr << t;}
void _print(string t)       {cerr << t;}
void _print(char t)         {cerr << t;}
void _print(lld t)          {cerr << t;}
void _print(double t)       {cerr << t;}
void _print(ull t)          {cerr << t;}
 
 
// Print my DS
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T, class V> void _print(unordered_map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << endl << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ \n"; for (auto i : v) {_print(i); cerr << endl;} cerr << "]";}
template <class T, class V> void _print(unordered_map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
 
ll gcd (ll a, ll b) { return b ? gcd (b, a % b) : a;}
long long sqrt_ll (long long x) { long long ans = 0; for (ll k = 1LL << 30; k != 0; k /= 2) { if ((ans + k) * (ans + k) <= x) { ans += k;}} return ans;}
long long bin_exp(long long a, long long b) {long long res = 1; while (b > 0) {if (b & 1)res = res * a; a = a * a; b >>= 1;} return res;}
long long mod_exp(long long a, long long b, long long m) {a %= m; long long res = 1; while (b > 0) {if (b & 1)res = res * a % m; a = a * a % m; b >>= 1;} return res;}
long long mod_inv(ll n , ll mo) {return mod_exp(n, mo - 2, mo);}
vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
vector<bool> sievebool(ll n) {vector<bool> res(n + 1, true); for (int i = 2; i * i <= n; i++) {if (res[i]) {for (int j = i * i; j <= n; j = j + i) {res[j] = false;}}} return res;}
bool isPrime(int n) {if (n <= 1) {return false;} if (n <= 3) {return true;} if (n % 2 == 0 || n % 3 == 0) {return false;} for (int i = 5; i * i <= n; i = i + 6) {if (n % i == 0 || n % (i + 2) == 0) {return false;}} return true;}
 
 
// Debugging
#ifndef ONLINE_JUDGE
#define dbg(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define dbg(x)
#endif
/***************************************************************************************************/
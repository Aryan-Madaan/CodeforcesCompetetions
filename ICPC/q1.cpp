#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define int ll
typedef unsigned long long ull;
typedef long double lld;
#define all(x) (x).begin(), (x).end()
#define MOD 1000000007
#define endl  '\n'
const double eps = 1e-8, pi = acos(-1);
const int N1 = 1e5, inf = 1e18;
#define ff              first
#define ss              second
#define rep(i,j)        for(int i = 0; i < (j); ++i)
#define PI 3.1415926535897932384626
// #ifndef ONLINE_JUDGE
#define debug(x) cout << #x <<" "; _print(x); cout << endl;
#define debugarr(x,n) cout << #x <<" "; _print(x,n); cout << endl;
// #else
// #define debug(x)
// #define debugarr(x,n)
// #endif
void _print(ll t) {cout << t;}
//void _print(int t) {cout << t;}
void _print(string t) {cout << t;}
void _print(bool t) {cout << (t ? "True" : "False");}
void _print(char t) {cout << t;}
void _print(lld t) {cout << t;}
void _print(double t) {cout << t;}
void _print(ull t) {cout << t;}
template <class T, class V> void _print(pair <T, V> p);
template <class T,class V> void _print(T v[],V n);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T> void _print(multiset <T> v);
template <class T> void _print(unordered_set <T> v);
template <class T> void _print(unordered_multiset <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T, class V> void _print(multimap <T, V> v);
template <class T, class V> void _print(unordered_map <T, V> v);
template <class T, class V> void _print(unordered_multimap <T, V> v);
template <class T, class V> void _print(pair <T, V> p) {cout << "{"; _print(p.first); cout << ","; _print(p.second); cout << "}";}
template <class T,class V> void _print(T v[],V n) {cout << "[ "; for (V i=0;i<n;i++) {_print(v[i]); cout << " ";} cout << "]";}
template <class T> void _print(vector <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}
template <class T> void _print(set <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}
template <class T> void _print(multiset <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}
template <class T> void _print(unordered_set <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}
template <class T> void _print(unordered_multiset <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}
template <class T, class V> void _print(map <T, V> v) {cout << "[ "; for (auto i : v) {_print(i); cout << " ";} cout << "]";}
template <class T, class V> void _print(multimap <T, V> v) {cout << "[ "; for (auto i : v) {_print(i); cout << " ";} cout << "]";}
template <class T, class V> void _print(unordered_map <T, V> v) {cout << "[ "; for (auto i : v) {_print(i); cout << " ";} cout << "]";}
template <class T, class V> void _print(unordered_multimap <T, V> v) {cout << "[ "; for (auto i : v) {_print(i); cout << " ";} cout << "]";}

//all global variables
const int N = 100000; // see constraints
// ll factorialNumInverse[N + 1];   //(used in ncr%MOD)
// ll naturalNumInverse[N + 1];
// ll fact[N + 1];

void fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

// lld sqrt(lld a)
// {
//     lld s=0;
//     lld e=1e18;
//     for(int i=0;i<100;i++)
//     {
//         lld mid = (s+((e-s)/2));
//         if((mid*mid)>a)
//         {
//             e=mid;
//         }
//         else
//         {
//             s=mid;
//         }
//     }
//     return s;
// }

void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    unordered_map<int,int>m1;
    unordered_map<int,int>m2;
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        if((i%2)==0)
        {
            m1[ele]++;
        }
        else
        {
            m2[ele]++;
        }
        v[i]=ele;
    }
    if(n==1)
    {
        cout<<"YES"<<endl;
        return;
    }
    if(n==2)
    {
        if(v[1]>=v[0])
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        return;
    }
    int f=0;
    sort(all(v));
    // debug(v);
    // debug(m1);
    // debug(m2);
    for(int i=0;i<n;i++)
    {
        // v[i] find in m1
        if((i%2)==0)
        {
            auto it1 = m1.find(v[i]);
            if(it1==m1.end())
            {
                f=1;
                break;
            }
            if((*it1).second>=1)
            {
                (*it1).second--;
            }
            else
            {
                f=1;
                break;
            }
        }
        else
        {
            auto it1 = m2.find(v[i]);
            if(it1==m2.end())
            {
                f=1;
                break;
            }
            if((*it1).second>=1)
            {
                (*it1).second--;
            }
            else
            {
                f=1;
                break;
            }
        }
    }
    if(f==1)
    {
        cout<<"NO"<<endl;
        return;
    }
    else
    {
        cout<<"YES"<<endl;
    }

    return;
}

int32_t main()
{
    fast_io();
    ll testcases=1;ll cse = 0;
    cin >> testcases;
    // InverseofNumber(MOD);InverseofFactorial(MOD);factorial(MOD); 
    while (testcases--)
    {
        //cse++;
        //cout<<"Case #"<<cse<<": ";
        //cout<<fixed<<setprecision(10)<< <<endl;
        solve();
    }
    return 0;
}



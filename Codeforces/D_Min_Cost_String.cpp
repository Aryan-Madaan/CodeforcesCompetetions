//                                               Created by Aryan Madaan.
//---------------------------------------------------------------------------------------------------
#include <bits/stdc++.h>

#include <stdio.h>
using namespace std;
#define Expresso std::ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define mod 1000000007
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef long double ld;
typedef unsigned long long ull;
#define mp make_pair
#define ff first
#define ss second
#define pb(v) push_back(v)
#define INF 2e9
#define rep(i,n) for(int i =0;i<n;i++)
#define endl '\n'
const double eps = 1e-6, pi = acos(-1);
const char nl = '\n';

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int randomize()
{
return (rand() % 1000);
}


//---------------------------------------------------------------------------------------------------




void solve()
{
    int t=1;
    //cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        // vector<vector<bool>>v1(k,vector<bool>(k,0));
        vector<char>v;
        priority_queue<pair<char>>;
        for(int i=k-1;i>=0;i--)
        {
            x.push(mp(k,'a'+i));
        }
        v.pb('a'+k-1);
        char z= 'a'+k-1;
        while(v.size()<n)
        {
            pair <int,char> data = x.top();
            v.pb(data.second);
            data.first--;
            x.pop();
            x.push(data);
        }
        rep(i,v.size())
        {
            cout << v[i];
        }
    }
}
/*
*/





//---------------------------------------------------------------------------------------------------
int main() {
   cout.precision(numeric_limits<double>::max_digits10);
       cout << setprecision(15) << fixed;
    Expresso
    solve();
    return 0;
}



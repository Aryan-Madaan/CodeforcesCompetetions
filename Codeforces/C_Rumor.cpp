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

void dfs(vector<vector<int>>&v1,vector<int>&v,vector<bool>&f,int&i,int&temp)
{
    temp=min(v[i],temp);
    f[i] =0;
    rep(j,v1[i].size())
    {
        if(f[v1[i][j]])
        {
            dfs(v1,v,f,v1[i][j],temp);
        }
    }
}


void solve()
{
    int t=1;
    //cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >>m;
        vector<int>v(n,0);
        rep(i,n)
        cin >> v[i];
        vector<vector<int>>v1(n);
        rep(i,m)
        {
            int x,y;
            cin >> x >> y;
            v1[x-1].pb(y-1);
            v1[y-1].pb(x-1);
        }
        vector<bool>f(n,1);
        ll sum=0;
        rep(i,n)
        {
            int temp = INT_MAX;
            if(f[i])
            {
                dfs(v1,v,f,i,temp);
                sum+=temp;
            }
        }
        cout << sum;
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



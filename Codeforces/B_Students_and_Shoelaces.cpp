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


//---------------------------------------------------------------------------------------------------




void solve()
{
    int t=1;
    //cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        unordered_map<int,vector<int>>ma;
        vector<bool>v(n,0);
        vector<int>v1;
        rep(i,m)
        {
            int x,y;
            cin >> x >>y;
            ma[x-1].pb(y-1);
            ma[y-1].pb(x-1);
            v[x-1]=v[y-1]=1;
        }
        int cnt=0;
        bool f=1;
        while(f){
            f=0;
            rep(i,n)
            {
                int count=0;
                if(v[i])
                {
                    rep(j,ma[i].size())
                    {
                        if(v[ma[i][j]]){
                            count++;
                        }
                    }
                    if(count>0&&count<2)
                    {
                        v1.pb(i);
                        f=1;
                    }
                }
            }
            rep(i,v1.size())
            {
                v[v1[i]]=0;
            }
            if(f)
            cnt++;
            v1.clear();
        }
        cout <<cnt;
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



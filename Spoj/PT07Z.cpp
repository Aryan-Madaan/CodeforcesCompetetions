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


int max_distance=0,point=0,point1=0;

void dfs(vector<vector<int>>&v,vector<bool>&visit,int i,int dist)
{
    visit[i]=0;
    if(dist>max_distance)
    {
        point = i;
        max_distance=dist;
    }
    rep(j,v[i].size())
    {
        if(visit[v[i][j]])
        {
            dfs(v,visit,v[i][j],dist+1);
        }
    }
}

void solve()
{
    int t=1;
    //cin >> t;
    while(t--)
    {
        int n,x,y,data =0;
        cin >> n;
        vector<vector<int>>v(n);
        rep(i,n-1)
        {
            cin >> x >> y;
            v[x-1].pb(y-1);
            v[y-1].pb(x-1);
            data=x-1;
        }
        vector<bool>visit(n,1),visit1(n,1);
        int d=0;
        dfs(v,visit,data,d);
        max_distance=0;
        point1=point;
        d=0;
        dfs(v,visit1,point1,d);
        cout << max_distance;
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

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

bool dfs(vector<vector<int> >& graph,vector<bool>&vis,vector<bool>&col,int node,bool coll)
{
    vis[node] = 1;
    col[node] = coll;
    // bool flag = 
    rep(i,graph[node].size())
    {
        if(vis[graph[node][i]])
        {
            if(col[graph[node][i]]==coll)
                return false;
        }
        else
        {
            if(!dfs(graph,vis,col,graph[node][i],!coll))
            return false;
        }
    }
    return true;
}


void solve()
{
    int t=1,p=1;
    cin >> t;
    while(t--)
    {
        int bugs,scene,a,b;
        bool ans = 1;
        cin >> bugs >> scene;
        vector<vector<int> > graph(bugs);
        vector<bool> vis(bugs,0),col(bugs,0);
        rep(i,scene)
        {
            cin >> a >> b;
            graph[a].pb(b);
            graph[b].pb(a);
        }
        cout<< "Scenario #" << p <<":\n";
        rep(i,bugs)
        {
            if(!vis[i])
            {
                ans =  ans & dfs(graph,vis,col,i,0);
            }
        }
        if(ans)
        {
            cout << "No suspicious bugs found!\n";
        }
        else
        {
            cout << "Suspicious bugs found!\n";
        }
        p++;
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


